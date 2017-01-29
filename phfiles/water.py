def max(x,y):
   if x > y:
      return x
   else:
      return y

def min(x,y):
   if x < y:
      return x
   else:
      return y

import sys

argv = sys.argv

number = 7

out = 0
for num in range(0,number-1):
    for num2 in range(num,number):
        volume = min(int(argv[num2+1]),int(argv[num+1]))*(num2-num)
        out = max(out,volume)

print "maximam volume = " + str(out)
