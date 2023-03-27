#include<iostream>
using namespace std;
void f(int b[],int n){
	for (int i = 0; i <n; ++i)
	{
		b[i]=b[i]+10;
	}
	//14,13,15,17,12 

	for (int i = 0; i <n; ++i)
	{
		cout<<b[i]<<" ";
	}
	cout<<endl;


}
int main(){
	int arr[]={4,3,5,7,2};
	int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	
	f(arr,n);
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
		
	return 0;
	
}
