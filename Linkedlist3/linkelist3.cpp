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



void insertatend(node*&head,node*&tail,int data){
	// ll is empty
	// case 1: ll is empty
	if(head==NULL){
		// node x(data);
		// head=&x;
		// tail=&x;
		node*x=new node(data);
		head=x;
		tail=x;

	}
	else{
		node*x=new node(data);
		tail->next=x;
		tail=x;

	}
}

void printll(node*head){

	while(head!=NULL){
		cout<<head->data<<"-->";//7
	head=head->next;

	}
	


}


int lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lenrec(head->next);
}

// odd and even length-->2 one
// int midpoint(node*head){
// 	node*slow=head;
// 	node*fast=head;

// 	while(fast!=NULL and fast->next!=NULL){
// 		slow=slow->next;
// 	fast=fast->next->next;

// 	}

// 	return slow->data;
	
// }
// odd and even length-->1 one
node* midpoint(node*head){
	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;

	}

	return slow;
	
}
node* mergetowsortedll(node*&head1,node*&head2){
	if(head1==NULL){
		return head2;
	}
	if(head2==NULL){
		return head1;
	}
	// rec case
	if(head1->data<head2->data){//<5
		node*newhead=head1;
		newhead->next=mergetowsortedll(head1->next,head2);
		return newhead;
	}
	else{
		node*newhead=head2;
		newhead->next=mergetowsortedll(head1,head2->next);
		return newhead;
	}
}

node* mergesortll(node*head){
	// base case
	if(head==NULL){
		return NULL;
	}
	if(head->next==NULL){
		return head;

	}


	// rec case
	node* mid=midpoint(head);//600
	node*n=mid->next;
	mid->next=NULL;
	node*x=mergesortll(head);//3 4 5
	node*y=mergesortll(n);
	return mergetowsortedll(x,y);
}
bool checkcycleispresent(node*head){
	node*slow=head;
	node*fast=head;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		return true;
	}
	}
	// linearv hai 
	return false;
	

}
void createcycle(node*&head,int nodeno){
	node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}

	node*n=head;
	for(int jump=1;jump<nodeno;jump++){
		n=n->next;
	}
	temp->next=n;

}
void breakcycle(node*head){
	// step1-->check cycle is presnt or not
	node*slow=head;
	node*fast=head;
	bool kyacyclehai=false;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;
	if(slow==fast){
		kyacyclehai=true;
		break;
	}
	}
	 

	// step 2: if cycle is present then break it
	if(kyacyclehai==true){
		// tou break karlo-->floyd cycle detecttion-->to break cycle
		slow=head;

		while(slow->next!=fast->next){
			slow=slow->next;
		fast=fast->next;

		}
		fast->next=NULL;
		

	}

}
int main(){

	node*head=NULL;
	node*tail=NULL;
	int n;
	
	cin>>n;//5
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;
		insertatend(head,tail,data);
	}//1 2 3 4 5 6 7 8 
	// if(checkcycleispresent(head)){
	// 	cout<<"cycle is present"<<endl;
	// }
	// else{
	// 	cout<<"cycle is not present"<<endl;
	// }

	createcycle(head,3);

	breakcycle(head);
	printll(head);
	cout<<endl;

	// node*newhead=mergesortll(head);
	// printll(newhead);
	// cout<<endl;



	// node*head1=NULL;
	// node*tail1=NULL;
	// node*head2=NULL;
	// node*tail2=NULL;
	// int n;
	// int m;
	// cin>>n;
	// for (int i = 0; i <n; ++i)
	// {
	// 	int data;
	// 	cin>>data;
	// 	insertatend(head1,tail1,data);
	// }//3 6 9 12

	// cin>>m;
	// for (int i = 0; i <m; ++i)
	// {
	// 	int data;
	// 	cin>>data;
	// 	insertatend(head2,tail2,data);
	// }//5 11 13

	// node*newhead=mergetowsortedll(head1,head2);
	// printll(newhead);

	





	return 0;
}