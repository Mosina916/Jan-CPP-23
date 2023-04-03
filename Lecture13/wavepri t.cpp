#include<iostream>
using namespace std;
void waveprint(int arr[3][4],int tr,int tc){
	for(int cn=0;cn<=tc-1;cn++){
		if(cn%2==0){
		// cn even hai -->downward print
			for(int j=0;j<=tr-1;j++){
				cout<<arr[j][cn]<<" ";

			}
			
	}
	else{
		// cn is odd -->upward print
		for(int j=tr-1;j>=0;j--){
			cout<<arr[j][cn]<<" ";


		}
		
	}

	}
	
}
int main(){
	
	int arr[3][4]={
		{3,4,2,1},
		{5,6,8,1},
		{0,6,7,2}
	};

	waveprint(arr,3,4);



	




	return 0;
}