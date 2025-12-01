#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int m, n, a, b; cin >> m >> n >> a >> b;
		if(m > n) swap(m, n);
		int dem = 0;
		for(int i = m; i <= n; i++){
			if(i % a == 0 || i % b == 0) ++dem;
		}
		cout << dem << endl;
	}
	return 0;
}