


def main() -> None:
    N = int(input().strip())
    grid = [list(map(int, input().split())) for _ in range(N)]
    assert all((len(row) == N for row in grid))
    K = int(input().strip())
    called_numbers = list(map(int, input().split()))
    assert len(called_numbers) == K
    print(bingo_turn(N, K, grid, called_numbers))

if __name__ == '__main__':
    main()