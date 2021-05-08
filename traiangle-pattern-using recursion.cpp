/*Take as input N, a number. Print the following pattern (for N =4)

*

* *

* * *

* * * *

* * * * *           */
#include<iostream>
using namespace std;

void pattern(int n){
	if(n==0)
	{
		return;
	}
	pattern(n-1);
	for(int i=0;i<n;i++)
	{
		cout<<"*	";
	}cout<<endl;
}
int main() {
	int n;
	cin>>n;
	pattern(n);
	return 0;
}
