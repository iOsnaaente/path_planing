#include "AStar.h"

struct Node {
    int64_t x, y;   // Posições
    float f, g, h;  // Custos (Total, Acumulado e Heuristico )
    Node* parent;   // Nó parente para reconstruir o caminho  

    // Construtor da Struct 
    Node( int64_t x_, int64_t y_, float g_, float h_, Node* parent_ = nullptr )
        : x(x_), y(y_), g(g_), h(h_), f(g_ + h_), parent(parent_) {
            // Não faz nada, já salvou os valores em tempo de inicialização
        }
};

struct NodeComparator {
    bool operator()(const Node* a, const Node* b) const {
        return a->f > b->f;
    }
};

float heuristic(int64_t x1, int64_t y1, int64_t x2, int64_t y2) {
    return std::abs(x1 - x2) + std::abs(y1 - y2);
}

bool isValid(int64_t x, int64_t y, const std::vector<std::vector<int64_t>>& map) {
    return x >= 0 && y >= 0 && x < MAP_SIZE && y < MAP_SIZE && map[y][x] != 1;
}


std::vector<std::pair<int64_t, int64_t>> getNeighbors(int64_t x, int64_t y) {
    return {
        {x+1, y}, {x-1, y}, {x, y+1}, {x, y-1}
    };
}


std::vector<std::pair<int64_t, int64_t>> reconstructPath(Node* current) {
    std::vector<std::pair<int64_t, int64_t>> path;
    while (current != nullptr) {
        path.emplace_back(current->x, current->y);
        current = current->parent;
    }
    std::reverse(path.begin(), path.end());
    return path;
}

std::vector<std::pair<int64_t, int64_t>> aStar(
    const std::vector<std::vector<int64_t>>& map,
    std::pair<int64_t, int64_t> start,
    std::pair<int64_t, int64_t> goal
) {
    std::priority_queue<Node*, std::vector<Node*>, NodeComparator> openSet;
    std::vector<std::vector<bool>> closedSet(MAP_SIZE, std::vector<bool>(MAP_SIZE, false));
    std::vector<Node*> all_nodes; // para deletar no final

    Node* startNode = new Node(start.first, start.second, 0.0, heuristic(start.first, start.second, goal.first, goal.second));
    openSet.push(startNode);
    all_nodes.push_back(startNode);

    while (!openSet.empty()) {
        Node* current = openSet.top();
        openSet.pop();

        if (current->x == goal.first && current->y == goal.second) {
            auto path = reconstructPath(current);
            for (Node* n : all_nodes) delete n;
            return path;
        }

        closedSet[current->y][current->x] = true;
        for (auto [nx, ny] : getNeighbors(current->x, current->y)) {
            if (!isValid(nx, ny, map) || closedSet[ny][nx]) continue;
            float tentative_g = current->g + 1;
            Node* neighbor = new Node(nx, ny, tentative_g,
                heuristic(nx, ny, goal.first, goal.second),
                current);
            openSet.push(neighbor);
            all_nodes.push_back(neighbor);
        }
    }

    // Libera memória se não encontrou caminho
    for (Node* n : all_nodes) delete n;
    return {};
}
