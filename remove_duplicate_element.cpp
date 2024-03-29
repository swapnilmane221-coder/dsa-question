/******************(12Q Remove the duplicate element from the sorted  vector)************)

  //descripion----->>>1)You are given an integer array nums with possible duplicate elements ,in this we have to find the unique elements in the array and place them at the beginning of the array and then the remaining elements are placed at the end of the array(this sholud be igonred).


  //2) And also find the number of unique elements in the array (k).

  //3)The unique elements in the array should be in the order of their appearance in the array.






code--------->>*/
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v={1,2,2,3,5,3,4,5,4};
vector<int>v1{};
sort(v.begin(),v.end());
for(int i=0;i<v.size();i++){
 if(v[i]!=v[i+1]){
 v1.push_back(v[i]);
 }
}
for(int num:v1){
     cout<<num<<" ";
}
}
