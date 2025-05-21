import rclpy
from rclpy.node import Node
from custom_messages.msg import Robot, Obstacles, Target

class VisualizerNode(Node):
    def __init__(self):
        super().__init__('robot_visualizer')
        self.pub_robot   = self.create_publisher(Robot,     'robot_state', 10)
        self.pub_obs     = self.create_publisher(Obstacles, 'obstacles',   10)
        self.pub_target  = self.create_publisher(Target,    'target',      10)
        self.timer = self.create_timer(0.1, self.on_timer)

    def on_timer(self):
        r = Robot()
        # TODO: preencha r.actual_x, .actual_y, .new_x, .new_y
        self.pub_robot.publish(r)

        o = Obstacles()
        # TODO: o.kind, o.x, o.y, o.p1, o.p2
        self.pub_obs.publish(o)

        t = Target()
        # TODO: t.x, t.y
        self.pub_target.publish(t)

def main(args=None):
    rclpy.init(args=args)
    node = VisualizerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
