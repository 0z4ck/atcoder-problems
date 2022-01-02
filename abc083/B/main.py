N, A, B = map(int, input().split())

keta = len(str(N))

s = 0
for i in range(1,N+1):
    sk = 0
    for j in range(keta):
        sk += (i//(10**j))%10
    if A<=sk<=B:
        s += i

print(s)

