t=int(input())
while (t):
    n=list(input())
    x=n.count('a')
    y=n.count('b')
    print(min(x,y))
    t-=1
