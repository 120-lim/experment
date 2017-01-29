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

number = int(argv[1])

if number != (len(argv) - 2):
   print"Usage: n,h_1,...h_n"
   print"error number of pole(n) and the number you inputted is not same"
   quit()

out = 0

for num in range(0,number-1):
    for num2 in range(num,number):
        volume = min(int(argv[num2+2]),int(argv[num+2]))*(num2-num)
        out = max(out,volume)

print "maximam volume = " + str(out)
