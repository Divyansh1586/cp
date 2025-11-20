t = int(input())
for _ in range(t):
    n = int(input())
    sz = len(str(n))
    p = 1
    l = []
    for i in range(1, sz+1):
        p*=10
        d = p + 1
        if n%d == 0:
            ans = n // d
            l.append(ans)

    
    if not l:
        print(0)
    else:
        l.sort()
        print(len(l))
        for i in l:
            print(i, end = " ")
        print()