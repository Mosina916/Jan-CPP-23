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
int main(){
	char arr[100];
	cin.getline(arr,100);
	reverse(arr);

	cout<<arr<<endl;
	


	return 0;
}