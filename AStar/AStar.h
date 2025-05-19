#pragma once

#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <utility>
#include <vector>
#include <queue>
#include <ctime>
#include <cmath>
#include <set>

#include "stdint.h"


constexpr int64_t MAP_SIZE = 255;

std::vector<std::pair<int64_t, int64_t>> aStar(
    const std::vector<std::vector<int64_t>> &map,
    std::pair<int64_t, int64_t> start,
    std::pair<int64_t, int64_t> goal
);
