  //****************(Q18 maximum avgerage subarray***(sliding window))**********

//description--->>You are given an integer array nums consisting of n elements, and an integer k.
//                   Find a contiguous subarray whose length is equal to k that has the maximum average value 
//                   and return this value. Any answer with a calculation error less than 10-5 will be accepted.
 
//   code---->>
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>nums{1,12,-5,-6,50,3};
     int k=4,sum=0;
     int i=nums.size()-1;
     sort(nums.begin(),nums.end());
     for(int j=k;j>0;j--,i--){
       sum+=nums[i];
     }
     double avg=sum/(double)k;
     cout<<"average is"<<avg;
     return 0;
}