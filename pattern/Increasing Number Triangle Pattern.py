# Increasing Number Triangle Pattern

# 1
# 2 3
# 4 5 6
# 7 8 9 10
# 11 12 13 14 15

# code:
n=int(input("Enter number of rows:"))
num=1
for i in range(1,n+1):
     for j in range(0,i):
          print(f"{num} ",end="")
          num+=1
     print("")