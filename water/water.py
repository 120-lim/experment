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


number = int(raw_input("Enter the number of poles:"))
n = raw_input("Enter the hight of poles:").split()

if number != (len(n)):
   print"error number of pole(n) and the number you inputted is not same"
   quit()

out = 0

for num in range(0,number-1):
    for num2 in range(num,number):
        volume = min(int(n[num2]),int(n[num]))*(num2-num)
        out = max(out,volume)

print "maximam volume = " + str(out)
