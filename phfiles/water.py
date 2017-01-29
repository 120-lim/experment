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

number = 7
water = (1,5,2,1,2,4,6)

out = 0
for num in range(0,number-1):
    for num2 in range(num,number):
        volume = min(water[num2],water[num])*(num2-num)
        out = max(out,volume)

print "maximam =" + str(out)
