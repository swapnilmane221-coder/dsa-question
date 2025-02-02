# Symmetric-Butterfly Pattern

# *      *
# **    **
# ***  ***
# ********
# ***  ***
# **    **
# *      *

# code:
n=int(input("Enter the number of rows:"))
for i in range(1,n+1):
     print("*"*i,end="")
     print("  "*(n-i),end="")
     print("*"*i)
for i in range(n-1,0,-1):
     print("*"*i,end="")
     print("  "*(n-i),end="")
     print("*"*i)