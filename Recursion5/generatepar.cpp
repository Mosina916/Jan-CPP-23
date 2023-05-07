#include<iostream>
#include <vector>
#include<cstring>
using namespace std;
void generateparenthesis(int n,int ob,int cb,char out[1000],int j){
	// base case
	if(cb==n){
		out[j]='\0';
		
		cout<<out<<endl;
		return;
	}


	// rec case
	if(ob<n){
		out[j]='(';
		generateparenthesis(n,ob+1,cb,out,j+1);

	}

	if(ob>cb){
		out[j]=')';
		generateparenthesis(n,ob,cb+1,out,j+1);

	}
	

}

int main(){
	int n;
	cin>>n;
	char out[1000];
	generateparenthesis(n,0,0,out,0);
	
	
	return 0;
}