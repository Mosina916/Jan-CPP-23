#include<iostream>
using namespace std;
int main(){
	// int arr[10]={4,5,3,6,2,7,8,9,1,5};
	// for(int i=9;i>=0;i--){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	int arr[100];
	int n;
	cin>>n;//5
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];//6 3 4 5 2

	}
	for(int i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;




	


	return 0;
}