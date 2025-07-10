/*print the following pattern
  5 4 3 2 1
  5 4 3 2 1
  5 4 3 2 1 
  5 4 3 2 1 
  5 4 3 2 1 */
  
#include <iostream>
using namespace std;

/* logic - 1) row=1
           2) row<=5
           3) print 5 to 1
           4) row=row++  */

int main ()
{
	int row,col;
	for (int row=1;row<=5;row++)
	{
		for (int col=5;col>=1;col--)
		{
			cout<<col<<" ";
		}
		cout <<endl;
	}
}
