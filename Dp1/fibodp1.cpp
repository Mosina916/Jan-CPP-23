 #include<iostream>
using namespace std;
// 0 base index
int fibo(int pos){//0
	// base case
	if(pos==0||pos==1){
		return pos;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);//without storing

}

int tdfibo(int pos,int *arr){//0
	// base case
	if(pos==0||pos==1){
		return arr[pos]=pos;
	}
	// check
	if(arr[pos]!=-1){
		return arr[pos];
	}
	// rec case
	return arr[pos]=tdfibo(pos-1,arr)+tdfibo(pos-2,arr);//without storing

}

// bottom up approach
int bufibo(int pos){
	int *arr=new int[pos+1];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=pos;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	// for(int i=0;i<=pos;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	return arr[pos];
}



int main(){
	int pos;
	cin>>pos;//4
	
	// int arr[pos+1];
	int *arr=new int[pos+1];
	for (int i = 0; i <=pos; ++i)
	{
		arr[i]=-1;
	}

	// tdfibo(pos,arr);

	cout<<"td fibo at pos is : "<<tdfibo(pos,arr)<<endl;
	// for (int i = 0; i <=pos; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	cout<<"bu fibo at pos is : "<<bufibo(pos)<<endl;
	cout<<"fibo at pos is : "<<fibo(pos)<<endl;
	return 0;
}