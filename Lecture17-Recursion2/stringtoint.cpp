#include<iostream>
using namespace std;
int stringtoint(string s,int l){//"3469"-->3469 4
	// base case
	if(l==0){
		return 0;
	}
	// rec case
	return stringtoint(s,l-1)*10+(s[l-1]-'0');
}
int main(){
	string s;
	getline(cin,s);
	// cin>>s;
	int l=s.length();
	cout<<stringtoint(s,l)<<endl;
	return 0;
}