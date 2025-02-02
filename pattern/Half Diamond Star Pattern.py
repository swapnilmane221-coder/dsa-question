# Half Diamond Star Pattern

# *
# **
# ***
# ****
# *****
# ****
# ***
# **
# *

# code:
n=int(input("Enter the number of rows:"))
for i in range(1,n):
     print("*"*i)
for i in range(n,0,-1):
     print("*"*i)