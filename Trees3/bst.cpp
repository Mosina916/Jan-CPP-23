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


// void printrangeink1k2(node*root,int k1,int k2){
// 	// base case
// 	if(root==NULL){
// 		return;

// 	}
// 	// rec case
// 	printrangeink1k2(root->right,k1,k2);
// 	if(root->data>=k1 and root->data<=k2){
// 		cout<<root->data<<" ";
// 	}
// 	printrangeink1k2(root->left,k1,k2);
// }


bool searchbst(node*root,int key){
	if(root==NULL){
		return false;
	}

	// rec case
	if(root->data==key){
		return true;

	}
	else if(key<root->data){
		return searchbst(root->left,key);
	}
	else{
		return searchbst(root->right,key);
	}

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
bool checkbst(node* root,int mi=INT_MIN,int ma=INT_MAX){

	if(root==NULL){
		return true;
	}

	if(root->data>=mi and root->data<=ma and checkbst(root->left,mi,root->data) and checkbst(root->right,root->data+1,ma)){
		return true;
	}
	return false;
}
class pa{
public:
	int h;
	bool b;
	pa(){
		h=0;
		b=true;
	}
};

pa isbalanedtree(node*root){
	pa x;
	// base case
	if(root==NULL){
		return x;
	}


	// rec case
	pa l=isbalanedtree(root->left);
	pa r=isbalanedtree(root->right);
	x.h=max(l.h,r.h)+1;
	if(l.b and r.b and abs(l.h-r.h)<=1){
		x.b=true;
	}
	else{
		x.b=false;
	}
	
	return x;


}




int main(){
	node*root=buildbst();
	pa x=isbalanedtree(root);
	if(x.b){
		cout<<"balanced "<<endl;

	}
	else{
		cout<<"not balanced "<<endl;

	}
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