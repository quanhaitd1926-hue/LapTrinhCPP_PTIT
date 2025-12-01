#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

ll binpow(ll a, ll b, ll m){
	if(b == 0) return 1 % m;
	ll x = binpow(a, b / 2, m);
	x = x * x % m;
	if(b % 2 == 1){
		return x * a % m;
	}
	else return x;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		string a;
		ll b, m;
		cin >> a >> b >> m;
		ll sum = 0;
		for(char c : a){
			sum = (sum * 10 + (c - '0')) % m; 
		}
		cout << binpow(sum, b, m) << endl;
		
	}
	return 0;
}