#include <iostream>
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
node* buildtree(){
	int d;
	cin>>d;
	if(d==-1){
		return NULL;
	}
	node*root=new node(d);
	root->left=buildtree();
	root->right=buildtree();
	return root;
}

void preorder(node*root){
	if(root==NULL){
		return;
	}

	// rec case
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node*root){
	if(root==NULL){
		return;
	}

	// rec case
	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(node*root){
	if(root==NULL){
		return;
	}

	// rec case
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case
	return max(height(root->left),height(root->right))+1;
}
int sumofnodes(node*root){
	// base case
	if(root==NULL){
		return 0;
	}
	// rec case
	return sumofnodes(root->left)+sumofnodes(root->right)+root->data;

}
int totalnode(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// rec case
	return totalnode(root->left)+totalnode(root->right)+1;
}

int main(){
	node*root=buildtree();
	// cout<<"preorder is : ";
	// preorder(root);
	// cout<<endl;
	// cout<<"inorder is : ";
	// inorder(root);
	// cout<<endl;
	// cout<<"postorder is : ";
	// postorder(root);
	// cout<<endl;

	cout<<"height of tree is " <<height(root)<<endl;
	cout<<"sum of nodes of tree is " <<sumofnodes(root)<<endl;
	cout<<"count of nodes of tree is " <<totalnode(root)<<endl;


	return 0;
}