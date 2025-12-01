#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool nt(ll n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}

bool check(int n) {
	int d = 10;
	while (n > 0) {
		if (d <= n % 10)
			return false;
		d = n % 10;
		n /= 10;
	}
	return true;
}

bool checktn(int n) {
	int d = -1;
	while (n > 0) {
		if (d >= n % 10)
			return false;
		d = n % 10;
		n /= 10;
	}
	return true;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll min_val = pow(10, n - 1);
		ll max_val = pow(10, n) - 1;
		int dem = 0;
		for(int i = min_val; i <= max_val; i++){
			if(check(i) || checktn(i)){
				if(nt(i)) ++dem;
			}
		}
		cout << dem << endl;
	}
	return 0;
}