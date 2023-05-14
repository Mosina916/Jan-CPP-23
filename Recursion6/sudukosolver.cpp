#include<iostream>
#include <cmath>
using namespace std;
bool kyamaiijpenumkodaalsaktehai(int mat[9][9],int i,int j,int num){
	// vertical
	for(int k=0;k<9;k++){
		if(mat[k][j]==num){
			return false;

		}
	}



	// horizontal
	for(int k=0;k<9;k++){
		if(mat[i][k]==num){
			return false;

		}
	}


	// 3*3 matrix
	int p=sqrt(9);//

	int si=(i/p)*p;//3
	int sj=(j/p)*p;//3

	for(int k=si;k<si+p;k++){
		for(int l=sj;l<sj+p;l++){
	if(mat[k][l]==num){
		return false;
	}
}

	}


	return true;
	




}
bool sudukosolver(int mat[9][9],int i,int j,int tr,int tc){

	// base case
	if(i==9){
		for(int l=0;l<9;l++){
			for(int k=0;k<9;k++){
				cout<<mat[l][k]<<" ";
			}
			cout<<endl;

		}
		return true;
	}


	// rec case
	if(j==9){
		return sudukosolver(mat,i+1,0,tr,tc);
	}
	if(mat[i][j]!=0){
		// mtlb wo filled hai
		return sudukosolver(mat,i,j+1,tr,tc);
	}
	else{
		for(int num=1;num<=9;num++){
			if(kyamaiijpenumkodaalsaktehai(mat,i,j,num)){
			mat[i][j]=num;
			bool bakikaans=sudukosolver(mat,i,j+1,tr,tc);
			if(bakikaans==true){
				return true;
			}
			mat[i][j]=0;

		}

		}

		return false;

		
	}
}
int main(){
	int mat[9][9] =
		{{0,3,0,0,7,0,0,0,0},
		{6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9}};


		sudukosolver(mat,0,0,9,9);


	


	return 0;
}