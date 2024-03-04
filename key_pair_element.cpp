//  // 1Q key pair problem  || two sum problem

//   Description of that Question:----->> In this promblem (key pair problem) firstly we have to select the  target value(which is present in array) 
//                                        given by the user and we have to find out the sum of the two element in the array is  equal to the target value.
                               


// code->
#include<bits/stdc++.h>
using namespace std;

int main(){
     
//******nested for loop approach*******
int target=11,size=6;
int arr[6]={5, 2, 6, 3, 1, 4};
for(int i=0;i<size;i++){
     for(int j=i;j<size;j++){
          cout<<"key pair is "<<arr[i]<<" and "<<arr[j]<<endl;
     }
}
     //time complixity is poor
     // time complixity is O(n*n);


//*******aproach 2********
int target=11,size=6;
int arr[6]={5, 2, 6, 3, 1, 4};
int l=0,r=size-1;
sort(arr,arr+size);
while(l<r){
     if(arr[l]+arr[r]==target){
          cout<<"The key pair is "<<arr[l]<<" and "<<arr[r]<<endl;
          break;
     }
     else if(arr[l]+arr[r]<target){
          l++;
     }
     else{
          r--;
     }
}

     return 0;
}



