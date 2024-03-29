/**************(Q13 moves all the zeros to the end of the array or vector)





  description----->> 1)Given an integer array nums, move all 0's to the end of it while maintaining the 
                       relative order of the non-zero elements.

                     2)Note that you must do this in-place without making a copy of the array. 




  code---->>
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={0,1,0,3,12};
     int j=0;
     for(int i=0;i<v.size();i++){
          if(v[i]==0){
       while(v[j]==0&&j<v.size()){
          j++;
       }
       swap(v[i],v[j]);
          }
     }
     for(int num:v){
          cout<<num<<" ";
     }
}