#include "bingo.h"

#include <iostream>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N;
    std::cin >> N;
    std::vector<std::vector<int>> grid;

    grid.reserve(N);
    for (int i = 0; i < N; ++i) {
        std::vector<int> col;
        col.reserve(N);
        for (int j = 0; j < N; ++j) {
            int x;
            std::cin >> x;
            col.push_back(x);
        }
        grid.push_back(std::move(col));
    }

    int K;
    std::cin >> K;
    std::vector<int> called_numbers;
    called_numbers.reserve(K);
    for (int i = 0; i < K; ++i) {
        int x;
        std::cin >> x;
        called_numbers.push_back(x);
    }

    std::cout << bingo_turn(N, K, std::move(grid), std::move(called_numbers)) << std::endl;
}