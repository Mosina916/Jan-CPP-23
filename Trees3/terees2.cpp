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


int height(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case
	return max(height(root->left),height(root->right))+1;
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

	}
	
	

}





node* buildlevelwisetree(){
	queue<node*> q;

	cout<<"enter the data of root"<<endl;
	int d;
	cin>>d;//8
	node*root=new node(d);
	q.push(root);

	while(!q.empty()){
		node*x=q.front();//100
	q.pop();
	int lc,rc;
	cout<<"enter left and right child of "<<x->data<<endl;
	cin>>lc>>rc;//1 6
	if(lc!=-1){
		x->left=new node(lc);
	q.push(x->left);

	}
	if(rc!=-1){
			x->right=new node(rc);
	q.push(x->right);
	}
	}

	return root;

	

}
int main(){
	node*root=buildlevelwisetree();
	Levelorderprint(root);
	

	

	return 0;
}