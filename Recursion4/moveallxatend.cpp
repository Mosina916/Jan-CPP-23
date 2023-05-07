#include<iostream>
#include <vector>
using namespace std;
string moveallxatend(string s){
	// base case
	if(s.length()==0){
		// return "";
		return s;

	}


	// /rec case
	char ch=s[0];
	if(ch=='x'){
		return moveallxatend(s.substr(1))+ch;
	}
	else{
		return ch+moveallxatend(s.substr(1));
	}
}

int main(){

	string s; //xa-->ax
	cin>>s;//xabxhxdfx--->abhdfxxxx

	cout<<moveallxatend(s)<<endl;

	
	
	return 0;
}