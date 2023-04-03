#include<iostream>
using namespace std;
int te;
void spiralprint(int arr[5][3],int tr,int tc){
	int sr=0;
	int er=tr-1;
	int sc=0;
	int ec=tc-1;
	int co=0;
	// loop
	while(er>=sr and ec>=sc){
		// start row print
	for(int j=sc;j<=ec;j++){
			cout<<arr[sr][j]<<" ";
			co++;
			
	}
	

	sr++;
	// last col
	for(int k=sr;k<=er;k++){
		cout<<arr[k][ec]<<" ";
		co++;
		
	}
	

	ec--;

// last row
	if(sr<er){
		for(int m=ec;m>=sc;m--){
		cout<<arr[er][m]<<' ';
		co++;
		
	}
	
	er--;

	}
	
	if(sc<ec){
		// ist col
	for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<' ';
		co++;
		
	}
	sc++;

	}
	
	
	

}
}
int main(){
	
	// int arr[4][4]={
	// 	{3,4,2,1},
	// 	{5,6,8,1},
	// 	{0,6,7,2},
	// 	{8,0,3,5}
	// };

	// square matrix

	// non square matrix
	int arr[5][3]={
		{3,4,2},
		{5,6,8},
		{0,6,7},
		{8,0,3},
		{78,23,36}
	};
te=5*3;







	int rowno=5;
	int colno=3;
	spiralprint(arr,rowno,colno);

	


	




	return 0;
}