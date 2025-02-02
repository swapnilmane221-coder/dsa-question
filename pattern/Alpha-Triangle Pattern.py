# Alpha-Triangle Pattern

# E
# DE
# CDE
# BCDE
# ABCDE

# code:
n=int(input("Enter the number of rows:"))
alpha=69
for i in range(1,n+1):
     start=alpha-i+1
     while(start<=alpha):
          print(chr(start),end="")
          start+=1
     print("")
