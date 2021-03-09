# cook your dish here
t = int(input())
for i in range (t):
   n,m,k = map(int,input().split())
   if abs(n-m)<=k:
      print("0")
   else:
      print(abs(n-m)-k)
   
   
