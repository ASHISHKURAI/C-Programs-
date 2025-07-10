 /* print the pattern 
    1
    22
    333
    4444 
	55555   */
#include <iostream>
using namespace std;

/*logic - 1) row=1
          2) row<=5
          3) print row no ,row times 
          4) row=row+1 */
          
 int main()
 {
 	int row,col;
 	for (int row=1;row<=5;row=row+1)
 	{
 		for(int col=1;col<=row;col=col+1){
 			cout<<row<<" ";
		 }
		 cout<<endl;
	 }
 }
  

