#include "naseej.h"

#include <iostream>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M;
    std::cin >> N >> M;
    std::vector<int> A, B, C;

    A.reserve(M);
    B.reserve(M);
    C.reserve(M);

    for (int i = 0; i < M; ++i) {
        int ai, bi, ci;
        std::cin >> ai >> bi >> ci;
        A.push_back(ai);
        B.push_back(bi);
        C.push_back(ci);
    }

    std::cout << artmatic_value(N, M, std::move(A), std::move(B), std::move(C)) << std::endl;
}