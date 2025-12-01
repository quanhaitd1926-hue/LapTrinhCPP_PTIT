#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		string a;
		long long x, y;
		cin >> a >> x >> y;
		long long g = __gcd(x, y);
		string res = "";
		for(long long i = 0; i < g; i++) res += a;
		cout << res << "\n";
	}
	return 0;
}