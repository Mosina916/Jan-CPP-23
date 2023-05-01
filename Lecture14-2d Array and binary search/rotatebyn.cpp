#include<iostream>
#include<string>
using namespace std;
int main(){
	// datatype name;
	string s1;
	getline(cin,s1);//"codingblocks" rotate k=3
	int k;
	cin>>k;

	int s1len=s1.length();
	string x=s1.substr(0,s1len-k);
	string y=s1.substr(s1len-k,k);
	string fs=y+x;
	cout<<fs<<endl;





	return 0;
}