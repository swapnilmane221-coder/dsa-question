 //********************(Q21 Rearrange-array-elements-by-sign)**********


//   description--->>You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

//                  You should return the array of nums such that the the array follows the given conditions:

//                  Every consecutive pair of integers have opposite signs.

//                  For all integers with the same sign, the order in which they were present in nums is preserved.
  
//                  The rearranged array begins with a positive integer.


// code---->>>
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>nums{1,2,3,-4,-1,-2};
     vector<int>positive{};
     vector<int>negative{};
     for(int i=0;i<nums.size();i++){
          if(nums[i]>=0){
     positive.push_back(nums[i]);
          }
     if(nums[i]<0){
     negative.push_back(nums[i]);
     }
     }
     for(int i=0,count=0;nums.size();i+=2,count++){
          nums[i]=positive[count];
          nums[i+1]=negative[count];
     }
     
     for(int num:nums){
          cout<<num<<" ";
     }
}