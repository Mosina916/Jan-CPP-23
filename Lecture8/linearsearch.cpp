#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;//5
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];//6 3 4 15 2

	}
	int key;
	cin>>key;//4
	int i;
	for(i=0;i<=n-1;i++){
		if(arr[i]==key){
			cout<<"key is present"<<endl;
			break;

	}

	}



	if(i==n){
		cout<<"key not present"<<endl;
	}
	

	


	

	


	return 0;
}