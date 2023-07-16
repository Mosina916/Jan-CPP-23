#include <iostream>
// #include <queue>
#include <set>
using namespace std;
set<int> s;
int sqofdigit(int n){
	int ans=0;

	while(n>0){
		int ld=n%10;
	ans=ans+ld*ld;
	n=n/10;

	}
	return ans;//82
	
}
bool happynumber(int n){//2
	while(s.find(n)==s.end()){
		s.insert(n);//2 4 16 37 58 89 145 42 20
	n=sqofdigit(n);//4
	if(n==1){
		return true;
	}

	}

	return false;
	

}

// happynumber(int n){//19
// 	while(){
// 		set.insert(n);//19 82 68 100
// 	int no=sqofdigit(n);//1
// 	if(no==1){
// 		return true;
// 	}

// 	}
	

// }


int main(){
	int n;
	cin>>n;//1 10 100 1000 .... 
	if(n==1||n%10==0){
		cout<<"true"<<endl;
		return 0;
	}
	if(happynumber(n)==true){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;

	}



	

	return 0;
}