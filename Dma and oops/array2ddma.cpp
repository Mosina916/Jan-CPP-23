#include<iostream>
using namespace std;
int main(){
	// sma 2d 
	// int arr[4][3];
	// dma
	int rows,cols;
	cin>>rows>>cols;
	int **arr=new int*[rows];
	for (int i = 0; i <rows; ++i)
	{
		arr[i]=new int[cols];
	}

	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	for (int i = 0; i <rows; ++i)
	{
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	for (int i = 0; i <rows; ++i)
	{
		delete [] arr[i];
		arr[i]=NULL;
	}


	delete []arr;
	arr=NULL;


	return 0;
}