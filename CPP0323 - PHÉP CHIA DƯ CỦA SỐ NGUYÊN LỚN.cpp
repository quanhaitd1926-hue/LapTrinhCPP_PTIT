#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		string n;
		ll m;
		cin >> n;
		cin >> m;
		ll sum = 0;
		sum += (n[0] - '0') % m;
		for(int i = 1; i < n.size(); i++){
			sum = sum * 10 + (n[i] - '0');
			sum %= m;
		}
		cout << sum << endl;
	}
	return 0;
}