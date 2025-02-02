# Hollow Rectangle Pattern

# *****
# *   *
# *   *
# *   *
# *****

# code:
n=int(input("Enter the number of rows:"))
for i in range(1,n+1):
     if i==1 or i==n:
          print("*"*n)
          continue
     print("*",end="")
     print(" "*(n-2),end="")
     print("*")
