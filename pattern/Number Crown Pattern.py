# Number Crown Pattern

# 1        1
# 12      21
# 123    321
# 1234  4321
# 1234554321

# code:
n=int(input("Enter the number of rows:"))
for i in range(1,n+1):
     num=1
     for j in range(0,i):
          print(num,end="")
          num+=1
     print("  "*(n-i),end="")
     num-=1
     for j in range(i,0,-1):
          print(num,end="")
          num-=1
     print("")