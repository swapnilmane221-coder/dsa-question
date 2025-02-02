# The Number Pattern

# 3 3 3 3 3 
# 3 2 2 2 3 
# 3 2 1 2 3 
# 3 2 2 2 3 
# 3 3 3 3 3

# code:
n=int(input("Enter the number of N:"))
for i in range(0,(n*2)-1):
     for j in range(0,(n*2)-1):
          top=i
          left=j
          right=(2*n-2)-j
          down=(2*n-2)-i
          print(n-min(min(left,right),min(top,down)),end="")
     print("")
          

     