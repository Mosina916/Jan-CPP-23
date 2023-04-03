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
	int n;
	cin>>n;//4
	cin.ignore();
	char arr[100];
	cin.getline(arr,100);//"pen"
	char abhitakkimaxarr[100];
	copy(abhitakkimaxarr,arr);//pen
	int abhitakkamaxlen=length(arr);//3


	char b[100];
	for(int i=1;i<=n-1;i++){

		cin.getline(b,100);//coder
		if(length(b)>abhitakkamaxlen){//5>8
		copy(abhitakkimaxarr,b);//elephant
		abhitakkamaxlen=length(b);//8

	}

	}


	cout<<abhitakkimaxarr<<endl;
	cout<<abhitakkamaxlen<<endl;
	
	
	


	return 0;
}