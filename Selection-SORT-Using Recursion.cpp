/* SORTING -Selection Sort using recursion*/

#include<iostream>
using namespace std;
int minindex(int arr[],int i,int n)
{
	if(n==i)
	{
		return i;
	}
	int k=minindex(arr,i+1,n);
	return (arr[i]<arr[k])? i:k; 
}
void recursionselection(int arr[],int n,int i){
	if(n==i)
	{
       return;
	}
	int k=minindex(arr,i,n);
    if (k!=i){ 
       swap(arr[k], arr[i]); 
	}
    recursionselection(arr,n,i+1); 
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	recursionselection(arr,n-1,0);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
