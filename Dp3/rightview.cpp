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

void rightview(node*root,int &mlttn,int cl){
	if(root==NULL){
		return;
	}


	if(cl>mlttn){
		cout<<root->data<<" ";
		mlttn++;
	}
	rightview(root->right,mlttn,cl+1);
	rightview(root->left,mlttn,cl+1);


}


void leftview(node*root,int &mlttn,int cl){
	if(root==NULL){
		return;
	}


	if(cl>mlttn){
		cout<<root->data<<" ";
		mlttn++;
	}
	
	leftview(root->left,mlttn,cl+1);
	leftview(root->right,mlttn,cl+1);


}



int main(){

	node*root=buildbst();
	int t=0;
	rightview(root,t,1);
	t=0;
	cout<<endl;
	leftview(root,t,1);
	

	

	return 0;
}