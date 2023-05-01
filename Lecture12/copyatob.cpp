#include <iostream>
using namespace std;
int length(char arr[100]){
// length(char *arr){
	int co=0;
	for (int i = 0; arr[i]!='\0'; ++i)
	{
		co++;
	}
	return co;

}
void copy(char b[100],char a[100]){
	int i=0;
	int j=0;

	while(i<=length(a)){
		b[j]=a[i];
	j++;
	i++;

	}
	

}
int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);//"hello"
	copy(b,a);//b mai copy karna a ko
	cout<<a<<endl;
	cout<<b<<endl;

	return 0;
}