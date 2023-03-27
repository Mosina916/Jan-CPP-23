#include<iostream>
using namespace std;
// void f(int b[5],int n){
void f(int *b,int n){

	for(int i=0;i<n;i++){
		b[i]=b[i]+10;
	}


	for (int i = 0; i <n; ++i)
	{
		cout<<b[i]<<" ";
	}

	cout<<endl;



}
int main(){
	int arr[5]={3,2,4,5,6};
	int n=5;

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