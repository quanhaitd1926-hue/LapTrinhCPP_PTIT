#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ucln(ll a, ll b){
	if(b == 0) return a;
	else return ucln(b, a % b);
}

ll bcnn(ll a, ll b){
	return (ll)(a * b) / ucln(a, b);
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int x, y, z, n; cin >> x >> y >> z >> n;
		ll l = pow(10, n - 1);
		ll r = pow(10, n) - 1;
		ll bc = bcnn(bcnn(x, y), z);
		ll k = ceil((l + bc - 1) / bc);
		ll ans = k * bc;
		if(ans <= r) cout << ans << endl;
		else cout << "-1\n";
	}
	return 0;
}