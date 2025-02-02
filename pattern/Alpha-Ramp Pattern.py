# Alpha-Ramp Pattern

# A
# BB
# CCC
# DDDD
# EEEEE

# code:
n=int(input("Enter the number of rows :"))
alpha=65
for i in range(1,n+1):
     print(chr(alpha)*i)
     alpha+=1