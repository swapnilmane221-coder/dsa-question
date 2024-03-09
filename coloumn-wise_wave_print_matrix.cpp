 //************8Q column-wise wave print matrix************


/*description---->> the matrix is given and in this matrix we have to print the element in column wise 
                  for example:----->>> 
                                        ____                   ____   
                                        |                         |
                                        | 1     2     3      4    |                    
                                        |                         |
                                        | 5    6      7       8   |
                                        |                         |
                                        | 9    10     11      12  |
                                        |                         |
                                        |____                 ____|

                     output---->>>1,5,9,10,6,2,3,7,11,12,8,4


code--------->>>*/

#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
//**********nested for loop******************


  vector<vector<int>>v {  //####initiallisation of the vector and the initaialisation of the value in th matrix
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    
  };
  int coloumn=v[0].size();
  int row=v.size();

  for(int i=0;i<coloumn;i++){
     for(int j=0;j<row;j++){
          cout<<v[j][i]<<" ";
     }
  }
//time complexity is O(n^2)
//space complexity is O(1)




}