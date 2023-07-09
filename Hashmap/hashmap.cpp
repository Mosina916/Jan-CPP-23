#include<iostream>
#include<cmath>
using namespace std;
class node{
public:
	string fname;
	string fcol;
	node*next;
	node(string fn,string fc){
		fname=fn;
		fcol=fc;
		next=NULL;
	}

};
class hashmap{
	node**arr;
	int ts;
	int cs;
public:
	hashmap(int si=7){
		arr=new node*[si];
		ts=si;
		cs=0;
	}
	int hashfunction(string fn){//abc
		int mult=1;
		// (sum(s[i]*mult))%ts
		int ans=0;
		for (int i = 0; i < fn.length(); ++i)
		{
			ans=(ans%ts+(fn[i]%ts*mult%ts)%ts)%ts;
			mult=(mult%ts*29%ts)%ts;
			
		}
		return ans%ts;

	}
	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;
		arr=new node*[2*ts];
		ts=2*ts;
		cs=0;
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}
		// copy
		for (int i = 0; i <oldts; ++i)
		{
			node*h=oldarr[i];
			while(h!=NULL){
				insert(h->fname,h->fcol);
				h=h->next;
			}
		}
	}
	void insert(string fn,string fc){
		int index=hashfunction(fn);
		node*n=new node(fn,fc);
		n->next=arr[index];
		arr[index]=n;
		cs++;
		if((cs*1.0)/ts>0.5){
			rehashing();
		}

	}

	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";
		node*h=arr[i];
		while(h!=NULL){
			cout<<"("<<h->fname<<","<<h->fcol<<")"<<",";
			h=h->next;
		}
		cout<<endl;

		}
		


	}
	bool search(string fn){
		int index=hashfunction(fn);
		node*h=arr[index];
		while(h!=NULL){
			if(h->fname==fn){
				return true;
			}
			h=h->next;
		}
		return false;

	}


};
int main(){
	hashmap h;
	h.insert("1","yellow");
	h.insert("Apple","red");
	h.insert("banana","yellow");
	h.insert("kiwi","green");
	if(h.search("banaana")){
		cout<<"present"<<endl;
	}
	else{
		cout<<"not present"<<endl;
	}
	h.print();

	


	return 0;
}