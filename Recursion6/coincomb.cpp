#include<iostream>
#include <vector>
using namespace std;

void Coin_Com(int coin[], int amount, string ans, int idx) {
		if (amount == 0) {
			cout<<ans<<endl;
			return;
		}

		for (int i = idx; i < coin.length(); i++) {
			if (amount >= coin[i]) {
				Coin_Com(coin, amount - coin[i], ans + coin[i], i);
			}

		}
	}
int main(){
	// TODO Auto-generated method stub
		int coin[] = { 2, 3, 5, 6 };
		int amount = 10;
		Coin_Com(coin, amount, "", 0);
	


	return 0;
}