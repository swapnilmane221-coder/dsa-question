//************9Q row-wise wave print matrix************


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

                     output---->>>1,2,3,4,8,7,6,5,9,10,11,12


code-------->>*/
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

  for(int i=0;i<row;i++){
     for(int j=0;j<coloumn;j++){
          cout<<v[i][j]<<" ";
     }
  }
//time complexity is O(n^2)
//space complexity is O(1)




}