


def main() -> None:
    N, M = map(int, input().split())
    A, B, C = [], [], []
    inputs = list(map(int, input().split()))
    assert len(inputs) == M * 3
    for i in range(0, len(inputs), 3):
        ai, bi, ci = inputs[i:i+3]
        A.append(ai)
        B.append(bi)
        C.append(ci)


    print((N, M, A, B, C))

if __name__ == '__main__':
    main()