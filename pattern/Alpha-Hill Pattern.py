# Alpha-Hill Pattern

#     A
#    ABA
#   ABCBA
#  ABCDCBA
# ABCDEDCBA

# code:
n=int(input("Enter the number of rows:"))
for i in range(1,n+1):
     alpha=65
     print(" "*(n-i),end="")
     for j in range(0,i):
          print(chr(alpha+j),end="")
     alpha=65+i-2
     while(alpha>=65):
          print(chr(alpha),end="")
          alpha-=1
     
     print("")