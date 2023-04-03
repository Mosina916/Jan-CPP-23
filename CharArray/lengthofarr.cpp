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

bool palindrome(char *arr){
	int i=0;
	int j=length(arr)-1;

	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;
	}
	else{
		return false;
	}

	}
	return true;
	

}
int main(){
	// char arr[100];
	// cin.getline(arr,100);//"hello"
	
	// cout<<length(arr)<<endl;
	// if(palindrome(arr)==true){
	// 	cout<<"it is palindrome"<<endl;

	// }
	// else{
	// 	cout<<"it is not palindrome"<<endl;

	// }


	return 0;
}