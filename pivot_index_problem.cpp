// ********find pivote index in the array******

// description of pivote index problem:----->> To find out the pivote index it should satisfied the condition of --->the sum of lefthandside elements   
//                                            of pivote index  and sum of righthandside elements of pivote ,both (lefthandside , righthandside) should be equal
//  code->
//  *********brute force approach*****
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
     int arr[5]={1,8,3,4,5};
     int size=5;
     int i,j;
     int lsum,rsum;
     for(i=1;i<size;i++){
          rsum=lsum=0;
       for(j=0;j<i;j++){
          lsum+=arr[j];
       }
       for(j=i+1;j<5;j++){
          rsum+=arr[j];
       }
       if(rsum==lsum){
          cout<<"pivot element is : "<<arr[i]<<endl;
       }
       
     }

}