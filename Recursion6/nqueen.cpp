#include<iostream>
#include <cmath>
using namespace std;
int sol[1000][1000]={0};
bool kyamaidaalsaktahunyanahi(int i,int j,int n){
	// vertical check
	for(int k=0;k<i;k++){
		if(sol[k][j]==1){
			return false;
		}
	}

	// horizontal check
	for(int k=0;k<j;k++){
		if(sol[i][k]==1){
			return false;
		}
	}

	// diagonal left
	int u=i-1;
	int v=j-1;

	while(u>=0 and v>=0){
		if(sol[u][v]==1){
		return false;
	}
	u--;
	v--;


	}

	// right diagonal
	int l=i-1;
	int m=j+1;

	while(l>=0 and m<n){
		if(sol[l][m]==1){
		return false;
	}
	l--;
	m++;
	

	}


	return true;
	



}
bool nqueen(int i,int n){
	// base case

	if(i==n){
		for(int l=0;l<n;l++){
			for(int k=0;k<n;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		// return true;

		return false;
	}


	// rec case
	for(int j=0;j<=n-1;j++){
		if(kyamaidaalsaktahunyanahi(i,j,n)==true){
		sol[i][j]=1;
		bool bakikaans=nqueen(i+1,n);//false;
		if(bakikaans==true){
			return  true;
		}


		// agar false diya rec ne 
		sol[i][j]=0;
	}

	}

	return false;

	




}

int main(){
	int n;
	cin>>n;

	nqueen(0,n);



	return 0;
}