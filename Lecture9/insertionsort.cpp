#include<iostream>
using namespace std;
int main(){

	int arr[]={5,1,0,4,3};
	int n=sizeof(arr)/sizeof(int);
// insertion sort
	int j;
	for(int i=1;i<=n-1;i++){
		int ele=arr[i];
		for(j=i-1;j>=0;j--){
			if(arr[j]>ele){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
		}
		arr[j+1]=ele;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;






}