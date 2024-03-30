//********************(Q20 stock buy and sell)**********


// description ---->>You are given an array prices where prices[i] is the price of a given stock on the ith day.

//                You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

//               Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
//code->>
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>nums{7,1,5,3,6,4};
     int i;
     int count=1;
    int mini=INT_MAX;
    for(int i=0;i<nums.size();i++){
     mini=min(mini,nums[i]);
    }
    for(int i=0;i<nums.size();i++,count++){
     if(mini==nums[i]){
          break;
     }
    }
    int max_profit=INT_MIN;
    for(int i=count;i<nums.size();i++){
         max_profit=(max_profit,nums[i]-mini);
    }
   int sell_price=mini+max_profit;
   cout<<"the sell is buy at "<<mini<<" and sold "<<sell_price;

}