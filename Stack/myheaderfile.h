#include<iostream>
#include <vector>
using namespace std;
template<typename T>
class Stack{
	
	vector<T> v;
public:

	// push
	void push(T x){
		v.push_back(x);

	}

	// pop
	void pop(){
		v.pop_back();
	}


	// top
	T top(){
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