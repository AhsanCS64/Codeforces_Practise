s= int(input())

w=12

x = 0
for _ in range(s):
    s = input().strip()
    if '+' in s:
        x += 1
    else:
        x-=1
print(x)
