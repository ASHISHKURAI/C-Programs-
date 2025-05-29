#include <iostream>
using namespace std;

int sum(int m,int n) // function declare
{
	int ans=m+n;  // function defination
	return ans;
}

int mul(int m,int n)
{
	int ans=m*n;
	return ans;
}

int main(){       
	
	int a,b;
	// function call
	cin>>a>>b;
	cout<<sum(a,b)<<endl;
	
	cout <<mul(a,b)<<endl;
}
