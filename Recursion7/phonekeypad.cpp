#include<iostream>
using namespace std;
string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void phonekeypad(char inp[100],char out[100],int i,int j){
	// base case
	if(inp[i]=='\0'){
		out[j]='\0';
		cout<<out<<endl;
		return;
	}



	// rec case
	char ch=inp[i];//'2'
	int index=ch-'0';//'2'-'0'-->2 3
	for(int k=0;arr[index][k]!='\0';k++){
		out[j]=arr[index][k];
	phonekeypad(inp,out,i+1,j+1);

	}
	

}
int main(){
	char inp[100];
	cin>>inp;//23
	char out[100];
	phonekeypad(inp,out,0,0);
	




	return 0;
}