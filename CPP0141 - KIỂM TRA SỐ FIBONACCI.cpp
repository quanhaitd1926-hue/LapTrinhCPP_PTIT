#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll f[100];

void ktao(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ktao();
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		int check = 0;
		for(int i = 0; i <= 93; i++){
			if(f[i] == n){
				cout << "YES\n";
				check = 1;
				break;
			}
		}
		if(!check) cout << "NO\n";
	}
	return 0;
}