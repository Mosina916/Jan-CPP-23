#include<iostream>
using namespace std;
int main(){
	
	int arr[][4]={
		{3,4,2,1},
		{5,6,8,1},
		{0,6,7,2}
	};


	cout<<*(*arr)<<endl;
	// cout<<&arr[0][0]<<endl;
	// cout<<&arr[0]<<endl;


	// cout<<&arr[1]<<endl;
	// cout<<&arr[1][0]<<endl;

	// cout<<&arr[2]<<endl;
	// cout<<&arr[2][0]<<endl;


	

	// for(int i=0;i<=2;i++){
	// 	for (int j=0;j<=3;j++)
	// {
	// 	cout<<arr[i][j]<<" ";
	// }

	// cout<<endl;

	// }




	return 0;
}