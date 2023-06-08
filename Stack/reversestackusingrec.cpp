#include<iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int>&s,int t){
	if(s.empty()){
		s.push(t);
		return;
	}


	int ele=s.top();//3
	s.pop();
	insertatbottom(s,t);
	s.push(ele);
}
void reversestackusingrec(stack<int>&s){
	// base case
	if(s.empty()){
		return;
	}


	// rec case
	int t=s.top();//2
	s.pop();
	reversestackusingrec(s);
	insertatbottom(s,t);
}

int main(){
	stack<int>s;
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(2);
	s.push(9);

	
	reversestackusingrec(s);
	while(!s.empty()){
		cout<<s.top()<<" ";//9
	s.pop();


	}

	



	return 0;
}