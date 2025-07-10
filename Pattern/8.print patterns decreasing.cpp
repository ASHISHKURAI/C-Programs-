/*  1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1  */ 
    
#include <iostream>
using namespace std ;
 /* 1) row=1
    2) row<=5
    3) print row to 1 
    4) row=row+1  */
    
int main(){
	int row,col;
	for (int row=1;row<=5;row++){
		for (int col=row ;col>=1 ;col--){
			cout << col<<" ";
		}
		cout <<endl;
	}
}
