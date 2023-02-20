#include<iostream>
using namespace std;
int main(){
	// sizeof(datatype);
	cout<<sizeof(int)<<endl;//4 bytes
	cout<<sizeof(double)<<endl;//8
	cout<<sizeof(char)<<endl; //1
	cout<<sizeof(bool)<<endl;//1

	cout<<sizeof(float)<<endl;//4

	// sizeof(variblename)
	int x=90;
	cout<<sizeof(x)<<endl;
	char ch='A';
	cout<<sizeof(ch)<<endl;




	return 0;
}