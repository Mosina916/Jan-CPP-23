#include<iostream>
#include <vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;
	}
};
class Stack{
	node*head;
	int l;
	public:
	Stack(){
		head=NULL;
		l=0;
	}


	// push-->insert at front

	void push(int d){
		node*n=new node(d);
		n->next=head;
		head=n;
		l++;
		

	}

	// pop-->delete atr front
	void del(){
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
		l--;

		
	}


	// top
	int top(){
		return head->data;
		
	}


	// empty
	bool empty(){
		return head==NULL;
		
	}

	// size
	int size(){
		return l;
		
	}

};
int main(){
	Stack s;
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