t = int(input())
for _ in range(t):

    n = int(input())
    cost = [3]
    p = 1
    ans = 0
    
    for i in range(0, 19):
        p *= 3
        bnd = p * 3 + (i + 1) * p / 3
        if(n < p): 
            break
        cost.append(bnd)

    for i in range(len(cost)-1, -1, -1): 
        p /= 3   
        r = n // p
        ans += r * cost[i]
        n = n % p
           
    print(int(ans))
