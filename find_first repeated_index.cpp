 //****************7Q find the first repeated index of element in the array************


  //#########description:---->>we have the array and we have to find the first repeated index of  element in the array.

  //#####condition--->>the base indexing should be started from 1.





//code--->>>
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
     //***************visited method**********
     int arr[]={1,5,3,4,3,5,6};
     int size=sizeof(arr)/sizeof(int);
     for(int i=0;i<size;i++){
          int index=abs(arr[i]);
          if(arr[index]<0){
               cout<<"the first repeated index of element"<<" "<<abs(arr[i])<<" "<<"is"<<" "<<i+1;
      break;
          }
          arr[index]*=(-1);
     }
     //### time complixity:  the time complixity of this code is O(n)

  //############### the space complixty is o(n)

     
  //*************(1st method using nested for loop)*********

 int arr[]={1,5,3,4,3,5,6};

  int size=sizeof(arr)/sizeof(int);
  

  for(int i=0;i<size;i++){
    bool isrepeated =false;
    for(int j=i+1;j<size;j++){
      if(arr[i]==arr[j]){
  
         isrepeated =true;
        cout << "The first repeated index of element " << arr[i] << " is " 
        << i + 1 << endl;
     
      } 
    }

    if(isrepeated){
      break;
    }
  };

}
//### time complixity:  the time complixity of this code is O(n^2)

  //############### the space complixty is o(1)

 // *************(2nd method using hashing method)*********



  // #####using hahsing method we can find the first repeated element in the array.

  // #### this is called as unordered map.------->>unordered map is a data structure that stores key-value pairs.

  // #### in unordered map the key is the element and the value is the index of the element.

  // #### this unordered map is taken form the header file of the unordered map(<unordered_map>) of STL library of c++.


  

   int arr[]={1,5,3,4,3,5,6};
  
   int size=sizeof(arr)/sizeof(int);

  unordered_map<int,int>hash;

  for(int i=0;i<size;i++){
    hash[arr[i]]++;
  }

  for(int i=0;i<size;i++){
    if(hash[arr[i]]>1){
      cout<<"the first repeated index of element"<<" "<<arr[i]<<" "<<"is"<<" "<<i+1;
      break;
    }
  }

  //### time complixity:  the time complixity of this code is O(n)

  //############### the space complixty is o(n)


return 0;

}