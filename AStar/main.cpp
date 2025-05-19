#include <SDL2/SDL.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <time.h>

#include "AStar.h"


const int64_t CELL_SIZE = 3;  // cada célula terá 3x3 pixels
const int64_t WINDOW_SIZE = MAP_SIZE * CELL_SIZE;
const int64_t OBSTACLE_BLOCKS = 100;

void draw(
    SDL_Renderer* renderer, 
    const std::vector<std::vector<int64_t>>& map,
    const std::vector<std::pair<int64_t, int64_t>>& path,
    std::pair<int64_t, int64_t> start, 
    std::pair<int64_t, int64_t> goal
) {
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); // fundo branco
    SDL_RenderClear(renderer);
    // Obstáculos
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // preto
    for (int64_t y = 0; y < MAP_SIZE; y++) {
        for (int64_t x = 0; x < MAP_SIZE; x++) {
            if (map[y][x] == 1) {
                SDL_Rect rect = {x * CELL_SIZE, y * CELL_SIZE, CELL_SIZE, CELL_SIZE};
                SDL_RenderFillRect(renderer, &rect);
            }
        }
    }

    // Caminho
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255); // azul
    for (auto& [x, y] : path) {
        SDL_Rect rect = {x * CELL_SIZE, y * CELL_SIZE, CELL_SIZE, CELL_SIZE};
        SDL_RenderFillRect(renderer, &rect);
    }

    // Start e Goal
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); // verde
    SDL_Rect startRect = {start.first * CELL_SIZE, start.second * CELL_SIZE, CELL_SIZE, CELL_SIZE};
    SDL_RenderFillRect(renderer, &startRect);

    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // vermelho
    SDL_Rect goalRect = {goal.first * CELL_SIZE, goal.second * CELL_SIZE, CELL_SIZE, CELL_SIZE};
    SDL_RenderFillRect(renderer, &goalRect);

    SDL_RenderPresent(renderer);
}

int main() {
    std::srand(std::time(nullptr));
    std::vector<std::vector<int64_t>> map(MAP_SIZE, std::vector<int64_t>(MAP_SIZE, 0));

    for (int64_t i = 0; i < OBSTACLE_BLOCKS; i++) {
        int64_t ox = std::rand() % MAP_SIZE;
        int64_t oy = std::rand() % MAP_SIZE;
        int64_t w = 5 + std::rand() % 25; // largura entre 5 e 30
        int64_t h = 5 + std::rand() % 25; // altura entre 5 e 30
    
        for (int64_t y = oy; y < oy + h && y < MAP_SIZE; y++) {
            for (int64_t x = ox; x < ox + w && x < MAP_SIZE; x++) {
                map[y][x] = 1;
            }
        }
    }

    std::pair<int64_t, int64_t> start, goal;
    do {
        start = {std::rand() % MAP_SIZE, std::rand() % MAP_SIZE};
    } while (map[start.second][start.first] == 1);

    do {
        goal = {std::rand() % MAP_SIZE, std::rand() % MAP_SIZE};
    } while (map[goal.second][goal.first] == 1 || goal == start);

    auto clearArea = [&](std::pair<int64_t, int64_t> p, int64_t radius = 3) {
        for (int64_t y = -radius; y <= radius; y++) {
            for (int64_t x = -radius; x <= radius; x++) {
                int64_t nx = p.first + x;
                int64_t ny = p.second + y;
                if (nx >= 0 && nx < MAP_SIZE && ny >= 0 && ny < MAP_SIZE) {
                    map[ny][nx] = 0;
                }
            }
        }
    };
    
    clearArea(start);
    clearArea(goal);

    clock_t start_time = clock();  // Marca início
    auto path = aStar(map, start, goal);
    clock_t end_time = clock();    // Marca fim
    
    double time_spent = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Tempo de execução do A*: %.6f segundos\n", time_spent);
    

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Erro ao iniciar SDL: " << SDL_GetError() << "\n";
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("A* Pathfinding",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
        WINDOW_SIZE, WINDOW_SIZE, SDL_WINDOW_SHOWN);

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    draw(renderer, map, path, start, goal);

    SDL_Event e;
    bool quit = false;
    while (!quit) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
