import sys
def solve() -> None:
    read_line = sys.stdin.buffer.readline
    n =int(read_line())

    positions = [0] * (n + 1)
    for position, value in enumerate(map(int, read_line().split()), start=1):
        positions[value] = position

    m = int(read_line())
    vasya =sum(positions[value] for value in map(int, read_line().split()))
    petya = m *(n + 1) - vasya
    print(vasya, petya)
if __name__ == "__main__":
    solve()
