#include<iostream>
using namespace std;
int main(){
	
	// int arr[100];
	// int n;
	// cin>>n;//5
	// for(int i=0;i<=n-1;i++){
	// 	cin>>arr[i];//6 3 4 15 2

	// }
	// int largest=arr[0];//6
	// for(int j=1;j<=n-1;j++){
	// 	if(arr[j]>largest){//2>15
	// 	largest=arr[j];//15

	// }

	// }

	// cout<<largest<<endl;

	int arr[100];
	int n;
	cin>>n;//5
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];//6 3 4 15 2

	}
	int smallest=arr[0];//6
	for(int j=1;j<=n-1;j++){
		if(arr[j]<smallest){//2>15
		smallest=arr[j];//15

	}

	}

	cout<<smallest<<endl;
	



	

	


	return 0;
}