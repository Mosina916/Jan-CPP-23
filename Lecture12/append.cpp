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
void append(char a[100],char b[100]){
	int i=0;
	int j=length(a);
	while(i<=length(b)){
		a[j]=b[i];
		j++;
		i++;
	}


}
int main(){
	char a[100];
	char b[100];
	cin.getline(a,100);
	cin.getline(b,100);
	append(a,b);
	cout<<a<<endl;
	cout<<b<<endl;



	return 0;
}