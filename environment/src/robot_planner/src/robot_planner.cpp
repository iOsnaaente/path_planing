#include <rclcpp/rclcpp.hpp>
#include <custom_messages/msg/obstacles.hpp>
#include <custom_messages/msg/robot.hpp>
#include <custom_messages/msg/target.hpp>

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

struct Obstacle {
    std::string kind;
    float x, y;
    float p1, p2;
};

float random_float(float min, float max) {
    return min + static_cast<float>(rand()) / RAND_MAX * (max - min);
}

int main(int argc, char * argv[]) {
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("robot_planner");

    auto pub_obstacle = node->create_publisher<custom_messages::msg::Obstacles>("/obstacles", 10);
    auto pub_robot    = node->create_publisher<custom_messages::msg::Robot>("/robot_pose", 10);
    auto pub_target   = node->create_publisher<custom_messages::msg::Target>("/target", 10);

    srand(static_cast<unsigned int>(time(nullptr)));

    // Geração de obstáculos aleatórios
    const int NUM_OBSTACLES = 10;
    std::vector<Obstacle> obstacles;

    for (int i = 0; i < NUM_OBSTACLES; ++i) {
        std::string kind;
        float p1, p2;

        int r = rand() % 3;
        if (r == 0) {
            kind = "Q"; p1 = random_float(0.05f, 0.1f); p2 = -1.0f;
        } else if (r == 1) {
            kind = "R"; p1 = random_float(0.05f, 0.15f); p2 = random_float(0.03f, 0.1f);
        } else {
            kind = "C"; p1 = random_float(0.05f, 0.12f); p2 = -1.0f;
        }

        float x = random_float(-0.8f, 0.8f);
        float y = random_float(-0.8f, 0.8f);

        obstacles.push_back({kind, x, y, p1, p2});
    }

    for (const auto & obs : obstacles) {
        custom_messages::msg::Obstacles msg;
        msg.kind = obs.kind;
        msg.x = obs.x;
        msg.y = obs.y;
        msg.p1 = obs.p1;
        msg.p2 = obs.p2;
        pub_obstacle->publish(msg);
        rclcpp::sleep_for(50ms);
    }

    RCLCPP_INFO(node->get_logger(), "Obstáculos enviados.");

    // Loop publicando posição do robô
    float t = 0.0f;
    const float step = 0.05f;
    const float radius = 0.5f;

    rclcpp::Rate rate(100); // 100 Hz

    while (rclcpp::ok()) {
        float x = radius * std::cos(t);
        float y = radius * std::sin(t);
        float tx = radius * std::cos(t + 1.0f);
        float ty = radius * std::sin(t + 1.0f);

        // Publica posição do robô
        custom_messages::msg::Robot robot_msg;
        robot_msg.actual_x = x;
        robot_msg.actual_y = y;
        robot_msg.new_x = tx;
        robot_msg.new_y = ty;
        pub_robot->publish(robot_msg);

        // Publica target
        custom_messages::msg::Target target_msg;
        target_msg.x = tx;
        target_msg.y = ty;
        pub_target->publish(target_msg);

        t += step;
        if (t > 2 * M_PI) t -= 2 * M_PI;

        rate.sleep();
    }

    rclcpp::shutdown();
    return 0;
}
