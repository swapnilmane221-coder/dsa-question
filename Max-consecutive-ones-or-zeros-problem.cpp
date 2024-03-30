/**************(Q14) MAx consecutive ones or zeros in a binary array************

  Description--->>Given a binary array nums, return the maximum number of consecutive 1's or 0's in the array.


code--->>*/
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={1,1,1,0,0,1,0};
     int count0=0,count1=0;
     int final_output;
     for(int i=0;i<v.size();i++){
          if(v[i]==0){
               count0++;
          }
          if(v[i]==1){
               count1++;
          }
     }
     final_output=max(count0,count1);
     cout<<"the maximum number of consecutive 1\'s or 0\'s are"<<final_output;
}

