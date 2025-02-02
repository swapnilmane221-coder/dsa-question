# Increasing Letter Triangle Pattern

# A
# AB
# ABC
# ABCD
# ABCDE

# code:
n=int(input("Enter the number of rows:"))
for i in range(1,n+1):
     alpha=65
     for i in range(0,i):
          print(chr(alpha),end="")
          alpha+=1
     print("")