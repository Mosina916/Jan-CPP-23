#include <iostream>
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
int main(){
	node x(3);
	node y(9);
	x.next=&y;//link

	cout<<x.data<<endl;
	cout<<x.next->data<<endl;
	cout<<(*x.next).data<<endl;
	







	return 0;
}