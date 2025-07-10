/* print the pattern

             1
             12
             123
             1234
             12345 */
             
#include <iostream>
using namespace std;

/* concept : 1) row=1
             2) row<=5
             3) print 1 to row
             4) row=row+1  */
int main(){
	int row,col;
	for(int row=1;row<=5;row++){
		for (col=1;col<=row;col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}
}
