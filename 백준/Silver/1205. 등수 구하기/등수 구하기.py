N,S,P=map(int,input().split())

if(N==0):
    print(1)
else:
    list=list(map(int,input().split()))
    if(N==P and list[-1]>=S):
        print(-1)
    else:
        R=N+1
        for i in range(N):
            if(list[i]<=S):
                R=i+1
                break
        print(R)
    