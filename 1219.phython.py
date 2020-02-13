from math import sqrt
pi = 3.1415926535897

while True:
    Try:
          a,b,c = [int(x) for x in input().split()]
          p = (a+b+c)/2
          tringle = sqrt(p *(p-a) * (p-b) *(p-c))
          moni = sqrt(((p-a) * (p - b) * (p-c))/p)
          noman = pi * moni**2
          moni = (a,b,c) / sqrt((a+b+c) * (b+c-a) * (c+a-b) * (a+b -c))
         Mahbuba = (pi * moni**2) - 
