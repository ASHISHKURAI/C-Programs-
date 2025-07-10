/* print the pattern 
        *
        * *
        * * *
        * * * *
        * * * * *    */
        
#include <iostream>
using namespace std;

 /* concept - 1) row=1
              2) row<=5
              3) print * row times
              4) row=row+1 */
              

int main()
{
	int row,col;
	for (int row=1;row<=5;row++){
		
		for (int col=1; col<=row;col++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
}
