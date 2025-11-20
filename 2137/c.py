
def helper(a, b):
    res = -1
    for i in range(1, int(b**0.5) + 1):
        if b % i == 0:
            k1 = i
            k2 = b // i

            x1, y1 = a * k1, b // k1
            if (x1 + y1) % 2 == 0:
                res = max(res, x1 + y1)

            if k1 != k2:  # avoid repeating when i == b // i
                x2, y2 = a * k2, b // k2
                if (x2 + y2) % 2 == 0:
                    res = max(res, x2 + y2)

    return res


t = int(input())
for _ in range(t):
    a, b = map(int, input().split())
    print(helper(a, b))
