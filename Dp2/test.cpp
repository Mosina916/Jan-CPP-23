 #include<iostream>
using namespace std;
int mincoins(int amount,int *coins,int n){
	// base case
	if(amount==0){
		return 0;
	}


	// rec case

	int ans=INT_MAX;

	for(int i=0;i<n;i++){
		int ramount=amount-coins[i];
	if(ramount>=0){
		int rans=mincoins(ramount,coins,n);
		if(rans<ans){
			ans=rans+1;
		}

	}

	}
	return ans;
	
}
int tdmincoins(int amount,int *coins,int n,int *arr){
	// base case
	if(amount==0){
		return arr[amount]=0;
	}

	if(arr[amount]!=INT_MAX){
		return arr[amount];
	}


	// rec case

	int ans=INT_MAX;

	for(int i=0;i<n;i++){
		int ramount=amount-coins[i];
	if(ramount>=0){
		int rans=tdmincoins(ramount,coins,n,arr);
		if(rans!=INT_MAX and rans<ans){
			ans=rans+1;
		}

	}

	}

	
	return arr[amount]=ans;
	
}

int bottomup(int coins[],int amount,int n){
	int *arr=new int[amount+1];
	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=INT_MAX;
	}

	arr[0]=0;

	for(int curramount=1;curramount<=amount;curramount++){
		for(int j=0;j<n;j++){
		int x=curramount-coins[j];//2
	 if(x>=0){//
	 	arr[curramount]=min(arr[curramount],arr[x]+1);
	 }

	}
	}

	for (int i = 0; i <=amount; ++i)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return arr[amount];

	
	


}

int main(){
	
	int amount;
	cin>>amount;//13
	int coins[]={9,6,5,1};
	// int coins[]={9,6,5,1,13,20};
	int n=sizeof(coins)/sizeof(int);

	cout<<bottomup(coins,amount,n)<<endl;


	// cout<<mincoins(amount,coins,n)<<endl;

	// int *arr=new int[amount+1];
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	arr[i]=INT_MAX;
	// }
	// cout<<tdmincoins(amount,coins,n,arr)<<endl;
	// for (int i = 0; i <=amount; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	

	return 0;
}