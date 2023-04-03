#include<iostream>
using namespace std;
bool findinmatrix(int arr[3][4],int tr,int tc,int key){
	for(int i=0;i<=tr-1;i++){
		for(int j=0;j<=tc-1;j++){
		if(arr[i][j]==key){
			cout<<"key is present at index "<<i<<" "<<j<<endl;
		return true;

	}

	}

	}
	return false;
	
}
int main(){
	
	int arr[3][4]={
		{3,4,2,1},
		{5,6,8,1},
		{0,6,7,2}
	};
	int rows=3;
	int cols=4;
	int key;
	cin>>key;//8
	if(findinmatrix(arr,rows,cols,key)==false){
		cout<<"key is not present"<<endl;
	}





	return 0;
}