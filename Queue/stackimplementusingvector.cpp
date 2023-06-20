#include<iostream>
#include <vector>
using namespace std;
class Stack{
	
	vector<int> v;
public:

	// push
	void push(int x){
		v.push_back(x);

	}

	// pop
	void pop(){
		v.pop_back();
	}


	// top
	int top(){
		return v[v.size()-1];
	}


	// empty
	bool empty(){
		return v.size()==0;
		// if(v.size()==0){
		// 	return true;
		// }
		// return false;
	}

	// size
	int size(){
		return v.size();
	}

};
int main(){
	Stack s;
	s.push(3);
	s.push(5);
	s.push(7);
	s.push(2);
	s.push(9);

	// cout<<s.v[2]<<endl;

	while(!s.empty()){
		cout<<s.top()<<" ";//9
	s.pop();


	}
	



	return 0;
}