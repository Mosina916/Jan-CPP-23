#include<iostream>
#include <stack>
using namespace std;

int main(){
	stack<int>s;
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(2);
	s.push(9);

	while(!s.empty()){
		cout<<s.top()<<" ";//9
	s.del();


	}
	



	return 0;
}