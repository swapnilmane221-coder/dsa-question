 //******************5Q shift all the negative number to the left side of the vector************


  // description---->>we have the vector and we have to shift all the negative number to the left side of the vector and 
     //                all the positive number to the right side of the vector and it is not compulsory that vector should be in sorted form .


//code----->>>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
     vector<int>v={-1,2,3,-4,5,-6,7,8}   //initialise vector
       sort(v.begin(),v.end());     //sort the vector
       for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";          //nigative number shifted vector 
       }
       return 0;

}