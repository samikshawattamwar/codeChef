# cook your dish here
t=int(input())
while t:
   dish1 = list(map(str,input().split()))
   dish2 = list(map(str,input().split()))
   count = 0
   check = 0
   for i in range (len(dish1)):
      for j in range (len(dish2)):
         if dish1[i]== dish2[j]:
            count +=1
            break
      if count == 2:
            check = 1
            break
   if check == 1:
      print('similar')
   else:
      print('dissimilar')
   t-=1
