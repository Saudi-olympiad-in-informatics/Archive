#include "jerboa.h"

#include <iostream>



int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    std::vector<int> A;
    A.reserve(N);
    for (int i = 0; i < N; ++i) {
        int x;
        std::cin >> x;
        A.push_back(x);
    }

    std::vector<int> B;
    B.reserve(N);
    for (int i = 0; i < N; ++i) {
        int x;
        std::cin >> x;
        B.push_back(x);
    }


    std::vector<int> U, V;
    U.reserve(N);
    V.reserve(N);
    for (int i = 0; i < N; ++i) {
        int u, v;
        std::cin >> u >> v;
        U.push_back(u);
        V.push_back(v);
    }

    const auto ans = max_water(
        N,
        M,
        std::move(A),
        std::move(U),
        std::move(V),
        std::move(B)
    );

    std::cout << ans << std::endl;
}