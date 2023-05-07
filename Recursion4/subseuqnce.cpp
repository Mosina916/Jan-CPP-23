#include<iostream>
#include <vector>
using namespace std;
void subsequence(char inp[1000],char out[1000],int i,int j){
	// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	// rec case
	out[j]=inp[i];
	subsequence(inp,out,i+1,j+1);
	subsequence(inp,out,i+1,j);//without a
	
}

int main(){
	char inp[1000];
	cin>>inp;
	char out[1000];
	subsequence(inp,out,0,0);
	
	return 0;
}