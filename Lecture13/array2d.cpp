#include<iostream>
using namespace std;
int main(){
	// datatype nameofarr[noofrows][noofcols];
	// int arr[3][4];
	// int arr[100][100];
	// int rows,cols;
	// cin>>rows>>cols;//3 4 


	// for(int i=0;i<=rows-1;i++){
	// 	for (int j=0;j<=cols-1;j++)
	// {
	// 	cin>>arr[i][j];
	// }

	// }

	// // print
	// for(int i=0;i<=rows-1;i++){
	// 	for (int j=0;j<=cols-1;j++)
	// {
	// 	cout<<arr[i][j]<<" ";
	// }

	// cout<<endl;

	// }
	

	// for (int j=0;j<=3;j++)
	// {
	// 	cin>>arr[1][j];
	// }

	// // 3rd row ka i/p
	// for (int j=0;j<=3;j++)
	// {
	// 	cin>>arr[2][j];
	// }


	// int arr[]={3,4,2,5};
	// you can ignore no of rows in 2d array but not no of cols
	// int arr[3][4]={
	// 	{3,4,2,1},
	// 	{5,6,8,1},
	// 	{0,6,7,2}
	// };
	int arr[][4]={
		{3,4,2,1},
		{5,6,8,1},
		{0,6,7,2}
	};

	for(int i=0;i<=2;i++){
		for (int j=0;j<=3;j++)
	{
		cout<<arr[i][j]<<" ";
	}

	cout<<endl;

	}




	return 0;
}