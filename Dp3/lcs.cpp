#include<iostream> 
#include<cmath>

#include<vector>
using namespace std;

// int lcs(string s1,string s2,int i,int j,vector<char> v){
// 	// basexase
// 	if(s1[i]=='\0'|| s2[j]=='\0'){
// 		for (int i = 0; i <v.size(); ++i)
// 	{
// 		cout<<v[i];
// 	}

// 	cout<<endl;

// 		return 0;
// 	}
// 	// rec case
// 	if(s1[i]==s2[j]){
		
// 		return 1+lcs(s1,s2,i+1,j+1,v);
		

// 	}
// 	else{
// 		int op1=lcs(s1,s2,i,j+1,v);
// 		int op2=lcs(s1,s2,i+1,j,v);
// 		return max(op1,op2);

// 	}
// }

int lcs(string s1,string s2,int i,int j,vector<char> &v){
	// basexase
	if(s1[i]=='\0'|| s2[j]=='\0'){

		return 0;
	}
	// rec case
	if(s1[i]==s2[j]){
		v.push_back(s1[i]);
		return 1+lcs(s1,s2,i+1,j+1,v);
		v.pop_back();
		

	}
	else{
		int op1=lcs(s1,s2,i,j+1,v);
		int op2=lcs(s1,s2,i+1,j,v);
		return max(op1,op2);

	}
}


int bottomup(string s1,string s2){
	int n=s1.length();
	int m=s2.length();
	int arr[100][100]={0};
	for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		if(s1[i-1]==s2[j-1]){
		arr[i][j]=1+arr[i-1][j-1];
	}
	else{
		int op1=arr[i-1][j];
		int op2=arr[i][j-1];
		arr[i][j]=max(op1,op2);
	}

	}
}
for(int l=0;l<=n;l++){
			for(int k=0;k<=m;k++){
				cout<<arr[l][k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	
		

return arr[n][m];
	

	
}


int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	// getline(cin,s1);
	// getline(cin,s2);
	// vector<char> v;
	vector<char> v;

	cout<<lcs(s1,s2,0,0,v)<<endl;
	// cout<<bottomup(s1,s2)<<endl;



	for (int i = 0; i <v.size(); ++i)
	{
		cout<<v[i]<<' ';
	}
	cout<<endl;

	

	return 0;
}