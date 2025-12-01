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

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int max_value = INT_MIN;
		for(int i = 0; i < n - 1; i++){
			for(int j = n - 1; j > i; j--){
				if(a[j] > a[i]){
					max_value = max(max_value, a[j] - a[i]);
				}
			}
		}
		if(max_value == INT_MIN) cout << "-1\n";
		else cout << max_value << endl;
	}
	return 0;
}