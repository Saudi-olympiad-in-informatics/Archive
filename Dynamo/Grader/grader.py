import sys

def main() -> None:
    N, Q = map(int, input().split())
    A = input()
    assert len(A) == N

    # Initialize (you'll need to implement init, update, and query functions)
    init(N, Q, A)

    output = []
    for _ in range(Q):
        T, L, R = map(int, input().split())

        if T == 1:
            update(L, R)
        elif T == 2:
            output.append(str(query(L, R)))
        else:
            sys.stderr.write(f"invalid input, unknown query type: {T}\n")
        sys.exit(1)

    print('\n'.join(output))

if __name__ == '__main__':
    main()