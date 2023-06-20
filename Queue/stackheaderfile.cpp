#include "myheaderfile.h"
int main(){
	// Stack s;
	// Stack<char> shs;
	Stack<int> s;
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(2);
	s.push(9);
	// s.push('A');
	// s.push('H');
	// s.push('S');
	// s.push('Q');
	// s.push('T');

	// cout<<s.v[2]<<endl;

	while(!s.empty()){
		cout<<s.top()<<" ";//9
	s.pop();


	}
	



	return 0;
}