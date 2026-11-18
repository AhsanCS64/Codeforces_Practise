import sys

def solve():
    data = sys.stdin.read().strip().split()
    if not data:
        return
    it = iter(data)
    n = int(next(it))
    pos = [0] * (n + 1)  # pos[value] = 1-based index in array
    for i in range(n):
        val = int(next(it))
        pos[val] = i + 1
    m = int(next(it))
    vasya = 0
    for _ in range(m):
        b = int(next(it))
        vasya += pos[b]
    petya = m * (n + 1) - vasya
    print(f"{vasya} {petya}")

if __name__ == "__main__":
    solve()