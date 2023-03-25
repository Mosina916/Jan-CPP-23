#include<iostream>
using namespace std;
int main(){
	int arr[]={5,4,3,2,1};
	// int arr[]={5,1,2,3,4};

	// int arr[]={2,4,9,7,4,4,0,3,2,1,5,4,3,2,2,2,1,1,1,2,2,2};
	int n=sizeof(arr)/sizeof(int);
// 	// bubble sort
	for(int co=1;co<=n-1;co++){//4
		
	for(int j=0;j<=n-co-1;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
}

	// 5 4 3 2 1
	// optimize bubble sort
	for(int co=1;co<=n-1;co++){//4
		cout<<co<<endl;
		bool kyaswaphuva=false;
	for(int j=0;j<=n-co-1;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			kyaswaphuva=true;
		}
	}
	if(kyaswaphuva==false){
		break;
	}
	//  2 1 3 4 5
}
	// 1 2 3 4 5

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";

}
cout<<endl;






}