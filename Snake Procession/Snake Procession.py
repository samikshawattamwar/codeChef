# cook your dish here
import math
t = int(input())
 
while t:
    n = int(input())
    l = list(filter((".").__ne__, input()))  
    if len(l)== 0:
        print("Valid")
    elif len(l)%2 !=0 :
        print("Invalid")
    else:
        validity = "Valid"
        i=0
        while i< len(l)-1:
            if (l[i]== "H" and l[i+1] != "T") or l[i]== "T":
                validity = "Invalid"
            i+=2
        print(validity)
    t-=1
