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
		cout<<head->data<<"-->";//7
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
// bool searchinll(node*head,node*tail,int key){



// 	while(head!=NULL){
// 		if(head->data==key){
// 		return true;
// 	}
// 	head=head->next;

// 	}
// 	return false;
	
// }
bool searchinllrec(node*head,int key){


// /base case
	if(head==NULL){
		return false;
	}


	// rec case
	if(head->data==key){
		return true;
	}
	return searchinllrec(head->next,key);
	
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
int midpoint(node*head){
	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL and fast->next!=NULL){
		slow=slow->next;
	fast=fast->next->next;

	}

	return slow->data;
	
}

void bubblesortinll(node*head){
	for(int times=1;times<=lenrec(head)-1;times++){
		for(node*temp=head;temp->next!=NULL;temp=temp->next){
		if(temp->data>temp->next->data){
			swap(temp->data,temp->next->data);
		}
	}
	// 1 2 3 4 5

	}

}

int nthnodefromend(node*head,int k){//5
	node*temp=head;
	for (int i = 1; i <=k-1; ++i)
	{
		temp=temp->next;
	}
	
	while(temp->next!=NULL){
		head=head->next;
	temp=temp->next;

	}
	return head->data;
	


}
// void reverseall(node*&head){
// 	node*curr=head;
// 	node*prev=NULL;
// 	while(curr!=NULL){
// 		node*n=curr->next;
// 		curr->next=prev;
// 		prev=curr;
// 		curr=n;
// 	}
// 	head=prev;
// }

node* reverseusingrec(node*&head,node*&prev){
	// base case
	if(head==NULL){
		return prev;
	}
	// rec case
	node*curr=head;
	
	node*n=curr->next;
	curr->next=prev;
	prev=curr;
	curr=n;
	return reverseusingrec(curr,prev);
	


}
node* kreverse(node*&head,int k){
	// base case
	if(head==NULL){
		return NULL;
	}


	// rec case
	node*temp=head;
	for (int jump = 1; jump <=k-1 ;jump++)
	{
		temp=temp->next;
	}
	node*n=temp->next;
	temp->next=NULL;
	node*x=NULL;
	node*h=reverseusingrec(head,x);
	node*l=kreverse(n,k);
	node*u=h;
	for (int i = 1; i <=k-1; ++i)
	{
		u=u->next;
	}
	u->next=l;

	return h;


}
int main(){
	node*head=NULL;
	node*tail=NULL;
	int n;
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		int data;
		cin>>data;//5 3 6 8 1 9 3 5 2 8 4 2 6 8 1 
		insertatend(head,tail,data);//
	}
	int k;
	cin>>k;
	node*headnew=kreverse(head,k);
	// reverseall(head);
	// node*x=NULL;

	// node*headnew=reverseusingrec(head,x);
	printll(headnew);
	// printll(head);
	/*int k;
	cin>>k;
	cout<<"nthnodefromend "<<nthnodefromend(head,k)<<endl;
*/
	// bubblesortinll(head);
	// printll(head);

	// cout<<"mid point is "<<midpoint(head)<<endl;
	// printll(head);
	// cout<<endl;

	// int key;
	// cin>>key;
	// if(searchinllrec(head,key)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }








	return 0;
}