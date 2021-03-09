# cook your dish here
t = int(input())
for i in range(t):
   basic = int(input())
   if (basic<1500):
      hra = (basic)*10/100
      da = (basic)*90/100
   else:
      hra = 500
      da = (basic)*98/100
   gross = basic+hra+da
   print(gross)
