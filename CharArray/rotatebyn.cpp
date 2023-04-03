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

// void reverse(char *arr){
// 	int j=length(arr)-1;
// 	int i=0;
// 	char b[100];
// 	while(j>=0){
// 		b[i]=arr[j];
// 		i++;
// 		j--;
// 	}
// 	b[i]='\0';
// 	cout<<b<<endl;
// }


void reverse(char *arr){
	int j=length(arr)-1;
	int i=0;

	while(i<j){
		swap(arr[i],arr[j]);
	i++;
	j--;

	}
	


}
void rotetebynchar(char*arr,int n){
	int i=length(arr);//8
	int j=i;//8
	int m=i;//8

	// every char will et shifted by n
	while(i>=0){
		arr[i+n]=arr[i];
	i--;

	}
	// cout<<arr<<endl;
	int s=0;

	for(int k=1;k<=n;k++){
		arr[s]=arr[j];
		s++;
		j++;

	}


	arr[m]='\0';

	cout<<arr<<endl;
	

}
int main(){
	int n;
	cin>>n;

	cin.ignore();
	char arr[100];
	cin.getline(arr,100);
	n=n%length(arr);

	rotetebynchar(arr,n);
	cout<<arr<<endl;
	


	return 0;
}