//************10Q spiral print matrix************

description---->> the matrix is given and in this matrix we have to print the element in spiral way  

                  for example:----->>> 
                                        ____                              ____   
                                        |                                    |
                                        | 1     2     3      4    5      6   |                    
                                        |                                    |
                                        | 7     8     9      10   11     12  |
                                        |                                    |
                                        | 13   14     15     16    17    18  |
                                        |                                    |
                                        | 19   20     21     22     23   24  |
                                        |                                    |
                                        | 25    26    27     28     29   30  |
                                        |____                            ____|
                    

  
                    output---->>>1,2,3,4,5,6,12,18,24,30,29,28,27,26,25,19,13,7,8,9,10,11,17,23,22,21,20,14,15,16

                 

code-------->>


#include <iostream>
#include<vector>


using namespace std;

int main()
{


#include <iostream>
#include<vector>


using namespace std;

int main()
{


code-------->>


#include <iostream>
#include<vector>


using namespace std;

int main()
{



  vector<vector<int>>v{
    {1,2,3,4,5,6},
    {7,8,9,10,11,12},
    {13,14,15,16,17,18},
    {19,20,21,22,23,24},
    {25,26,27,28,29,30}
  };

  int rows=v.size();
  int cols=v[0].size();

  int total=rows*cols;
  int startingrow=0;
  int endingcol=cols-1;
  int endingrow=rows-1;
  int startingcol=0;

  int count=0;


  while(count<total){

    //###print starting row

    for(int i=startingcol;i<=endingcol;i++){
      cout<<v[startingrow][i]<<" ";
      count++;

      if(count>=total){
        break;
      }
    }

    startingrow++;

    //###print ending col

    for(int i=startingrow;i<=endingrow;i++){
      cout<<v[i][endingcol]<<" ";
      count++;

      if(count>=total){
        break;
      }
    }

    endingcol--;


    //###print ending row

    for(int i=endingcol;i>=startingcol;i--){
      cout<<v[endingrow][i]<<" ";
      count++;

      if(count>=total){
        break;
      }
    }

    endingrow--;


    //###print starting col


    for(int i=endingrow;i>=startingrow;i--){
      cout<<v[i][startingcol]<<" ";
      count++;

      if(count>=total){
        break;
      }
    }

    startingcol++;
  }

  

  return 0;
}