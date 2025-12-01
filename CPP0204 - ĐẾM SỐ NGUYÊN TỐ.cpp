#include <bits/stdc++.h>
using namespace std;

#define ll long long

int prime[100001];
int mod = 100000;

void sang(){
	for(int i = 0; i <= mod; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(mod); i++){
		if(prime[i] == 1){
			for(int j = i * i; j <= mod; j += i){
				prime[j] = 0;
			}
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	sang();
	int t; cin >> t;
	while(t--){
		int l, r; cin >> l >> r;
		if(l > r) swap(l, r);
		int dem = 0;
		for(int i = l; i <= r; i++){
			if(prime[i]) ++dem;
		}
		cout << dem << endl;
	}
	return 0;
}