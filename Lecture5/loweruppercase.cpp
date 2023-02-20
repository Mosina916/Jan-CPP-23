#include<iostream>
using namespace std;
int main(){
	// char ch;
	// cin>>ch;//B

	// if(ch>=65 and ch<=90){//implicit type conversion
	// 	cout<<"UPPERCASE"<<endl;

	// }
	// // else if(ch>=97 and ch<=122){
	// // 	cout<<"lowercase"<<endl;

	// // }
	// // else{
	// // 	cout<<"some other character"<<endl;
	// // }


	// if(ch>=65 and ch<=90){//implicit type conversion
	// 	cout<<"UPPERCASE"<<endl;

	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else if(ch=='%' || ch=='$' ||ch=='#'){
	// 	cout<<"special character"<<endl;

	// }
	// else{
	// 	cout<<"some other character"<<endl;
	// }

	// if(ch>='A' and ch<='Z'){//implicit type conversion
	// 	cout<<"UPPERCASE"<<endl;

	// }
	// else if(ch>='a' and ch<='z'){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"some other character"<<endl;
	// }


	// isupper(character); islower
	char ch;
	cin>>ch;//'a'
	if(isupper(ch)){
		cout<<"UPPERCASE"<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"some other character"<<endl;
	}





	return 0;
}