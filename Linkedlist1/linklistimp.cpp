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

void insertatbegin(node*&head,node*&tail,int data){
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
		x->next=head;
		head=x;
	}

}

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
		cout<<head->data<<" ";//7
	head=head->next;

	}
	


}
void deleteatfront(node*&head,node*&tail){
	// ll is empty
	if(head==NULL){
		return;
	}
	// single node
	else if(head->next==NULL){
		delete head;//free the memory head is pointing at
		head=NULL;
		tail=NULL;

	}
	else{
		// multiple node
		node*temp=head;
		head=head->next;
		delete temp;
		temp=NULL;
	}
}
void deleteatend(node*&head,node*&tail){
	// ll is empty
	if(head==NULL){
		return;
	}
	// single node
	else if(head->next==NULL){
		delete head;//free the memory head is pointing at
		head=NULL;
		tail=NULL;

	}
	// multiple nodes
	else{
		node*temp=head;

		while(temp->next!=tail){
			temp=temp->next;

		}

		delete tail;
		tail=temp;
		tail->next=NULL;
		

	}
}
// int len(node*head){
// 	int co=0;

// 	while(head!=NULL){
// 		co++;
// 	head=head->next;

// 	}
	
// 	return co;
// }
int lenrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}


	// rec case
	return 1+lenrec(head->next);
}

void insertatanypos(node*&head,node*&tail,int data,int pos){
	if(pos==0){
		insertatbegin(head,tail,data);
	}
	else if(pos>=lenrec(head)){
		insertatend(head,tail,data);
	}
	else{
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;

		}
		node*x=new node(data);
		x->next=temp->next;
		temp->next=x;

	}


}
void deleteatanypos(node*&head,node*&tail,int pos){
	if(pos==0){
		deleteatfront(head,tail);
	}
	else if(pos>=lenrec(head)-1){
		deleteatend(head,tail);
	}
	else{
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		node*n=temp->next;
		temp->next=n->next;
		delete n;
		n=NULL;

	}
}
int main(){
	node*head=NULL;
	node*tail=NULL;
	// deleteatend(head,tail);
	// deleteatfront(head,tail);
	insertatbegin(head,tail,3);//3
	insertatbegin(head,tail,6);//-->3
	insertatbegin(head,tail,9);
	insertatbegin(head,tail,7);//7-->9-->6-->3


	insertatend(head,tail,10);////7-->9-->6-->3-->10
	// insertatanypos(head,tail,80,0);//7-->9-->6-->80-->3-->10
	// insertatanypos(head,tail,80,3);	
	// deleteatanypos(head,tail,80,0);	
	deleteatanypos(head,tail,3);	
	// deleteatend(head,tail);
	// deleteatfront(head,tail);//9-->6-->3-->10
	printll(head);
	cout<<endl;
	// printll(head);






	return 0;
}