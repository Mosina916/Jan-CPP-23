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

void preorder(node*root){
	if(root==NULL){
		return;
	}

	// rec case
	cout<<root->data<<",";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node*root){
	if(root==NULL){
		return;
	}

	// rec case
	
	inorder(root->left);
	cout<<root->data<<",";
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


int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// re  case
	int x=diameter(root->left);
	int y=diameter(root->right);
	int z=height(root->left)+height(root->right);
	return max(x,max(y,z));
}
class pa{
public:
	int h;
	int dia;
	pa(){
		h=0;
		dia=0;
	}
};

pa diamoptmized(node*root){
	pa x;
	// base case
	if(root==NULL){
		return x;
	}


	// rec case
	pa l=diamoptmized(root->left);
	pa r=diamoptmized(root->right);\
	x.h=max(l.h,r.h)+1;

	int op1=l.dia;
	int op2=r.dia;
	int op3=l.h+r.h;
	x.dia=max(op1,max(op2,op3));
	return x;

}

bool searchinbt(node*root,int da){
	// base case
	if(root==NULL){
		return false;
	}


	// rec case
	if(root->data==da||searchinbt(root->left,da)||searchinbt(root->right,da)){
		return true;
	}
	return false;
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

void mirroroftree(node*root){
	// base case
	if(root==NULL){
		return;
	}
	// rec case
	swap(root->left,root->right);
	mirroroftree(root->left);
	mirroroftree(root->right);
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
int i=0;

int prearr[]={8,10,1,6,4,7,3,14,13};
int inoarr[]={1,10,4,6,7,8,3,13,14};
node* buildtreeusingpreandinoreder(int s,int e){
	if(s>e){
		return NULL;
	}
	int d=prearr[i];//8
	i++;

	int indx;
	for(int k=s;k<=e;k++){
		if(d==inoarr[k]){
			indx=k;//5
			break;


		}

	}
	node*root=new node(d);
	root->left=buildtreeusingpreandinoreder(s,indx-1);
	root->right=buildtreeusingpreandinoreder(indx+1,e);
 return root;




}





int main(){
	int n=sizeof(inoarr)/sizeof(int);//9

	node* root=buildtreeusingpreandinoreder(0,n-1);
	// node*root=buildtree();
	// preorder(root);
	// cout<<endl;
	// inorder(root);
	Levelorderprint(root);
	// mirroroftree(root);
	// preorder(root);

	// cout<<diameter(root)<<endl;
	// pa ans=diamoptmized(root);
	// cout<<ans.dia<<endl;
	// int ke;
	// cin>>ke;
	// if(searchinbt(root,ke)){
	// 	cout<<"found"<<endl;
	// }
	// else{
	// 	cout<<"not found"<<endl;
	// }

	

	return 0;
}