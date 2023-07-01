#include <iostream>
#include <queue>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;
	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* insertinbst(node*root,int d){//null 13
	if(root==NULL){
		root=new node(d);
		return root;
	}
	else if(d>root->data){//11> 8
		// tou right mai daalo
		root->right=insertinbst(root->right,d);
		return root;

	}
	else{
		root->left=insertinbst(root->left,d);
		return root;
	}


	
}

node* buildbst(){
	node*root=NULL;
	int d;
	cin>>d;//8

	while(d!=-1){
		root=insertinbst(root,d);//200
	cin>>d;//-1

	}
	return root;
	

}
void Levelorderprint(node*root){
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node*x=q.front();//NULL
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);

		}
		
	}
	else{
		cout<<x->data<<" ";//8
	if(x->left!=NULL){
		q.push(x->left);
	}
	if(x->right!=NULL){
		q.push(x->right);
	}

	}

	}}

void printrangeink1k2(node*root,int k1,int k2){
	// base case
	if(root==NULL){
		return;

	}
	// rec case
	printrangeink1k2(root->left,k1,k2);
	if(root->data>=k1 and root->data<=k2){
		cout<<root->data<<" ";
	}
	printrangeink1k2(root->right,k1,k2);
}


node* buildtreeusingsorttedarr(int *arr,int s,int e){
	if(s>e){
		return NULL;
	}

	// rec case
	int mid=(s+e)/2;//3
	node*root=new node(arr[mid]);
	root->left=buildtreeusingsorttedarr(arr,s,mid-1);
	root->right=buildtreeusingsorttedarr(arr,mid+1,e);
	return root;
}

class ll{
public:

	node*H;
	node*T;
	ll(){
		H=NULL;
		T=NULL;
	}

};

ll bsttosortedll(node*root){
	ll x;

	// base case
	if(root==NULL){
		return x;
	}


	// rec case
	// case 1 no lst no rst
	if(root->left==NULL and root->right==NULL){
		x.H=root;
		x.T=root;
		// return x;

	}
	// case 2 lst but no rst
	else if(root->left!=NULL and root->right==NULL){
		ll p=bsttosortedll(root->left);
		p.T->left=root;
		root->left=NULL;
		x.H=p.H;
		x.T=root;
		// return x;


	}
	// case 3 no lst but rst
	else if(root->left==NULL and root->right!=NULL){
		ll p=bsttosortedll(root->right);
		p.T->left=NULL;
		root->left=p.H;
		x.H=root;
		x.T=p.T;
		// return x;



	}
	else{
		// bith lst and rst
		ll p=bsttosortedll(root->left);
	ll q=bsttosortedll(root->right);
	q.T->left=NULL;
	p.T->left=root;
	root->left=q.H;
	x.H=p.H;
	x.T=q.T;
	// return x;

	}
	
	return x;

}


node* deleteinbst(node*root,int key){
	// base case
	if(root==NULL){
		return NULL;
	}

	// rec case
	// key in lst
	if(key<root->data){
		// delte in left-->rec
		root->left=deleteinbst(root->left,key);
		return root;
	}
	else if(key>root->data){
		// delete in rstt-->rec 
		root->right=deleteinbst(root->right,key);
		return root;

	} 
	else{
		// key at root-->hum
		// case 1--> no lst no rst
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			return root;

		}
		// case 2--> lst no rst
		if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			root=temp;
			return root;
		

		}
		// case 3--> no lst but rst
		if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			root=temp;
			
			return root;
		

		}
		else{
			// make lst k max ko root 

			// node*temp=root->left;
			// while(temp->right!=NULL){
			// 	temp=temp->right;

			// }
			// swap(root->data,temp->data);
			// root->left=deleteinbst(root->left,key);
			// return root;

			// min of rst
			node*temp=root->right;
			while(temp->left!=NULL){
				temp=temp->left;

			}
			swap(root->data,temp->data);
			root->right=deleteinbst(root->right,key);
			return root;
		}

	}


}

void printll(node*root){
	while(root!=NULL){
		cout<<root->data<<"-->";
	root=root->left;
	}
	cout<<endl;
	
}
// 8 10 3 1 6 14 4 7 13 -1 
void inorderprint(node*root){
	if(root==NULL){
		return;
	}
	inorderprint(root->left);
	cout<<root->data<<" ";
	inorderprint(root->right);
}


int main(){
	node*root=buildbst();
	inorderprint(root);
	// ll x=bsttosortedll(root);
	// Levelorderprint(root);
	int key;
	cin>>key;
	node*newroot=deleteinbst(root,key);
	// inorderprint(newroot);
	Levelorderprint(newroot);
// printll(x.H);
	// pa x=isbalanedtree(root);
	// if(x.b){
	// 	cout<<"balanced "<<endl;

	// }
	// else{
	// 	cout<<"not balanced "<<endl;

	// }
	// if(checkbst(root)){
	// 	cout<<"yes bst"<<endl;
	// }
	// else{
	// 	cout<<"not a bst"<<endl;

	// }
	// int arr[]={1,2,3,4,5,6,7,8};
	// int n=sizeof(arr)/sizeof(int);
	// node*root=buildtreeusingsorttedarr(arr,0,n-1);
	// Levelorderprint(root);
	// node*root=buildbst();
	// Levelorderprint(root);
	// // 8 3 10 14 6 1 7 4 13 -1
	// int k1,k2;
	// cin>>k1>>k2;
	// printrangeink1k2(root,k1,k2);
	// int key;
	// cin>>key;
	// if(searchbst(root,key)){
	// 	cout<<"key found"<<endl;
	// }
	// else{
	// 	cout<<"key not found"<<endl;

	// }



	

	return 0;
}