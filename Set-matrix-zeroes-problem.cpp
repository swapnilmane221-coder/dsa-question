  //**********************(22Q set-matrix-zeroes)********


  //description---->>Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.


//code------>>
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<vector<int>>matrix{
  {1,1,1},
  {1,0,1},
  {1,1,1},
};int i,j;
for(i=0;i<matrix.size();i++){
     for(j=0;j<matrix.size();j++){
     if(matrix[i][j]==0){
          break;
     }
     }
}
for(int k=0;k<matrix.size();k++){
matrix[i][k]=0;
matrix[k][j]=0;
}
for( i=0;i<matrix.size();i++){
     for(int j=0;j<matrix.size();j++){
          cout<<matrix[i][j]<<" ";

     }
     cout<<endl;
}
return 0;
}