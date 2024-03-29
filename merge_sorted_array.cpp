 /*           Q megre sorted array************

description ----->>> 1)You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
                       representing the number of elements in nums1 and nums2 respectively.

                     2) Merge nums1 and nums2 into a single array sorted in non-decreasing order.

                     3) The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
                        To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
                        and the last n elements are set to 0 and should be ignored. nums2 has a length of n



code----->>>*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<int>v1={1,2,3,0,0,0,0};
     vector<int>v2={2,5,6,4};
     int v1_index=0;
     for(int i=0;i<v2.size();i++){
       while(v1_index<v1.size()&&v1[v1_index]!=0){
          v1_index++;
       }
       if(v1_index<v1.size()){
          v1[v1_index]=v2[i];
       }
       else{
          break;
       }
     }
     int right=v1.size()-1;
     int left=0;
     while(left<right){
          if(v1[left]>v1[left+1]){
               swap(v1[left],v1[left+1]);
          }
          left++;
          if(v1[right]<v1[right-1]){
               swap(v1[right],v1[right-1]);
          }
     }
     for(int num:v1){
          cout<<num<<" ";
     }
}
