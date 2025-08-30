#include "dynamo.h"

#include <iostream>
#include <cassert>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int N, Q;
    std::cin >> N >> Q;

    std::string A;
    std::cin >> A;
    assert(A.size() == N);

    init(N, Q, std::move(A));

    for (int _ = 0; _ < Q; ++_) {
        int T, L, R;
        std::cin >> T >> L >> R;
        switch (T) {
            case 1:
                update(L, R);
                break;
            case 2:
                std::cout << query(L, R) << '\n';
                break;
            default:
                std::cerr << "invalid input, unknown query type: " << T << std::endl;
                __builtin_trap();
        }
    }

    std::cout << std::flush;
}