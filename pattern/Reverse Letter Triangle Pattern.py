# Reverse Letter Triangle Pattern

# ABCDE
# ABCD
# ABC
# AB
# A

# code:
n=int(input("Enter the number of rows:"))
for i in range(n,0,-1):
     alpha=65
     for j in range(0,i):
          print(chr(alpha),end="")
          alpha+=1
     print("")