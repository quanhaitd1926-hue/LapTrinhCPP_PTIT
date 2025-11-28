#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		prev_permutation(a, a + n);
		for(int x : a) cout << x << ' ';
		cout << endl;
	}
	return 0;
}