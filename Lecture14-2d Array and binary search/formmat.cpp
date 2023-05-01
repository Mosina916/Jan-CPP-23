#include<iostream>
using namespace std;
int te;
void formmatrix(int tr,int tc,char arr[100][100]){
	int sr=0;
	int er=tr-1;
	int sc=0;
	int ec=tc-1;
	int co=0;
	char ch='X';
	// loop
	while(er>=sr and ec>=sc){
		// start row print
	for(int j=sc;j<=ec;j++){
			arr[sr][j]=ch;
		
			
	}
	

	sr++;
	// last col
	for(int k=sr;k<=er;k++){
		arr[k][ec]=ch;
		
		
	}
	

	ec--;

// last row
	if(sr<er){
		for(int m=ec;m>=sc;m--){
		arr[er][m]=ch;
	
		
	}
	
	er--;

	}
	
	if(sc<ec){
		// ist col
	for(int l=er;l>=sr;l--){
		arr[l][sc]=ch;
		
		
	}
	sc++;

	}
	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}
	
	
	

}
}
int main(){
	int x,y;
	cin>>x>>y;//5 5
	char arr[100][100];
	formmatrix(x,y,arr);



	for (int i = 0; i <x; ++i)
	{
		for(int j=0;j<y;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	


	




	return 0;
}