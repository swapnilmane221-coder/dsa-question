#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
     //***********sort method******************
     vector<int>v={1,3,2,4,2};
 int size=v.size();
 sort(v.begin(),v.end());
 for(int i=0;i<size;i++){
     if(v[i]==v[i+1]){
          cout<<"duplicate element is "<<v[i]<<endl;
     }
 }
     //********visited method***************
 vector<int>v={1,3,2,4,2};
 int size=v.size();
 for(int i=0;i<size;i++){
     int index=abs(v[i]);
     if(v[index]<0){
          cout<<"the duplicate element is "<<index<<endl;
     }
     v[index]*=(-1);
 }
 //*****************
}