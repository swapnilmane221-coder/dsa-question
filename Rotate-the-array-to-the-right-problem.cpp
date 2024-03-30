 //**************(Q15) rotate the array to the right)************


//   Description----->>Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

//   code---->>>

#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={-1,-100,3,99};
     int temp2,k;
     cout<<"enter how many step rotate: ";
     cin>>k;while(k>0){
          int temp1=v[v.size()-1],temp2;
          for(int i=0;i<v.size();i++){
               
               
               // if(i==v.size()-1){
               //    v[0]=v[i];
               // }
               
                    temp2=v[i];
                        v[i]=temp1;
                        temp1=temp2;
               
          }k--;
     }
     for(int num:v){
          cout<<num<<" ";
     }
}