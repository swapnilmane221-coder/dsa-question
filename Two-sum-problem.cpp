//*****(Q15 two sum problem)*********)


  //description---->>Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>nums{1,4,6,7,5};
     int target=9;
     int left=0,right=nums.size()-1;
     while(left<right){
          if(nums[left]+nums[right]<target){
               left++;
          }
          else if(nums[left]+nums[right]>target){
               right--;
          }
          else{
               cout<<nums[left]<<" , "<<nums[right]<<" have sum is"<<target;
               break;
          }
     }
}