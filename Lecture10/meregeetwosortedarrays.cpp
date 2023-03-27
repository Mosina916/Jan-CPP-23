#include<iostream>
using namespace std;
void mergetwosortedarr(int a[7],int b[4],int m,int n){
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(i>=0 and j>=0){
		if(a[i]>b[j]){
		a[k]=a[i];
		k--;
		i--;

	}
	else{
		a[k]=b[j];
		j--;
		k--;

	}

	}
	// dusri array copy karlo agar pehli khatam huvi

	while(j>=0){
		a[k]=b[j];
		j--;
		k--;

	}

}
int main(){
	int a[7]={3,6,7};
	int b[4]={0,2,9,13};
	int m=3;
	int n=4;
	mergetwosortedarr(a,b,m,n);
	// array print
	for (int i = 0; i <=m+n-1; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
		
	return 0;
	
}
