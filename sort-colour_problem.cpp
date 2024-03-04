//  ******3Q sorting colours

//    description----->> sort the colours in the array for example we have the array in this array we have three colours red,white,blue and we have to
//                       sort the array in the ascending order  and let red=0,white=1,blue=2.

                  

// code---->>>

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//******using sort function****
// int main(){
//      vector<int>v={0,1,2,0,1,2};
//      sort(v.begin(),v.end());
//      for(int i=0;i<v.size();i++){
//           cout<<v[i]<<" ";
//      }
//      return 0;
// }
  //space complexity is O(nlogn)
//*******using counting method**********
int main(){
     int ones,twos,zeros;
     ones=twos=zeros=0;
     vector<int>v={0,1,2,0,1,2};
     vector<int>sorted_array{};
     for(int i=0;i<v.size();i++){
          if(v[i]==0)
          zeros++;
          if(v[i]==1)
          ones++;
          if(v[i]==2)
          twos++;
          
     }
     int size=ones+twos+zeros;
     while(zeros--)
     sorted_array.push_back(0);
    while (ones--)
    {
     sorted_array.push_back(1);
    }
    while(twos--)
    sorted_array.push_back(2);
   
    for(int i=0;i<size;i++){
     cout<<sorted_array[i]<<" ";
    }
    return 0;
    //space complexity is O(nlogn)
    
     }
     