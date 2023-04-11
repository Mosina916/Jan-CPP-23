#include<iostream>
using namespace std;
int te;
void formmatrix(char arr[100][100],int tr,int tc){
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
			co++;
			
	}
	if(co==te){
				break;
			}

	sr++;
	// last col
	for(int k=sr;k<=er;k++){
		cout<<arr[k][ec]<<" ";
		co++;
		
	}
	if(co==te){
				break;
			}

	ec--;

// last row
	for(int m=ec;m>=sc;m--){
		cout<<arr[er][m]<<' ';
		co++;
		
	}
	if(co==te){
				break;
			}

	er--;
	// ist col
	for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<' ';
		co++;
		
	}
	sc++;
	if(co==te){
				break;
			}

	}
	

}
int main(){
	
	int x,y;
	cin>>x>>y;//5 5
	char arr[100][100];
	formmatrix(x,y,arr);







	int rowno=5;
	int colno=3;
	spiralprint(arr,rowno,colno);

	


	




	return 0;
}