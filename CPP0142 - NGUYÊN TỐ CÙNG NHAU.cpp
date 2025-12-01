#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

int prime[10000001];
int p = 10000000;

void sang(){
	for(int i = 0; i <= p; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(p); i++){
		if(prime[i] == 1){
			for(int j = i * i; j <= p; j += i){
				prime[j] = 0;
			}
		}
	}
}

int ucln(int a, int b){
	if(b == 0) return a;
	else return ucln(b, a % b);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	sang();
	int t; cin >> t;
	while(t--){
		int x; cin >> x;
		int dem = 0;
		for(int i = 1; i <= x; i++){
			if(ucln(i, x) == 1) ++dem;
		}
		if(prime[dem] == 1) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}