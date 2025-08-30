import sys

def main() -> None:
    N, M = map(int, input().split())

    A = list(map(int, input().split()))

    B = list(map(int, input().split()))
    U = []
    V = []

    for _ in range(N):
        u, v = map(int, input().split())
        U.append(u)
        V.append(v)

    ans = max_water(N, M, A, U, V, B)

    print(ans)

if __name__ == '__main__':
    main()