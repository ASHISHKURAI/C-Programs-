#include <iostream>
using namespace std;

int main(){
	
	int ages[8] ={10,15,20,30,40,50,55,60};
	float avg,sum=0;
	int i;
	int length = sizeof (ages) / sizeof (ages[0]);
	
	for (int i=0;i<8;i++){
		sum+=ages;
	}
	 avg =sum/length;
	 
	 cout << avg <<endl;
}
