# Diamond Star Pattern

#     *
#    ***
#   *****
#  *******
# *********
# *********
#  *******
#   *****
#    ***
#     *

# code:
n=int(input("Enter the number of rows:"))
for i in range(1,n+1):
     print(" "*(n-i),end="")
     print("*"*((i*2)-1))
for i in range(n,0,-1):
     print(" "*(n-i),end="")
     print("*"*((i*2)-1))