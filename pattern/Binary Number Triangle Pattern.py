# Binary Number Triangle Pattern

# 1
# 01
# 101
# 0101
# 10101

# code:
n=int(input("Enter the number of rows:"))
binary=1
for i in range(1,n+1):
     for j in range(0,i):
          print(binary,end="")
          if binary==1:
               binary=0
          else:
               binary=1
     print("")
     if i%2==0:
          if binary==1:
               binary=0
          else:
               binary=1
