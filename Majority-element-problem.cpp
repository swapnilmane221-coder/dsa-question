 //**************(Q17 majority element)**************
  

// description--->>Given an array nums of size n, return the majority element.
//              The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


// code---->>
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>nums{1,2,1,2,2};
     int final_count=0,element;
      for(int i=0;i<nums.size();i++){
          int count=0;
      for(int j=0;j<nums.size();j++){
          if(nums[i]==nums[j]){
               count++;
          }
      }
      if(count>final_count){
          element=nums[i];
      }
      final_count=max(final_count,count);    
      }
      cout<<"the element "<<element<<" is majority element";
}