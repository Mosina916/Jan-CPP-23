#include<iostream>
#include <cmath>
using namespace std;
int sol[100][100]={0};
bool ratinmaze(char maze[10][10],int i,int j,int tr,int tc){
	// base case

	if(i==tr-1 and j==tc-1){
		sol[i][j]=1;
		for(int l=0;l<=tr-1;l++){
			for(int k=0;k<=tc-1;k++){
				cout<<sol[l][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;


		sol[i][j]=0;

		// return true;
		return false;
	}



	// rec case
	sol[i][j]=1;
	if(j<=tc-2 and maze[i][j+1]!='B'){
		if(ratinmaze(maze,i,j+1,tr,tc)==true){
			return true;
		}
	}
	
	if(i<=tr-2 and maze[i+1][j]!='B'){
		if(ratinmaze(maze,i+1,j,tr,tc)==true){
			return true;
		}
	}

	sol[i][j]=0;
	return false;
}
int main(){
	char maze[10][10]={
		"UUBU",
		"BUBB",
		"BUUB",
		"BUUU"

	};
	int tr=4,tc=4;
	
	ratinmaze(maze,0,0,tr,tc);


	return 0;
}