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
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		int l, r; cin >> l >> r;
		int left = l, right = r;
		while(a[l] <= a[l + 1] && l < right){
			++l;
		}
		while(a[r] <= a[r - 1] && r > left){
			--r;
		}
		if(l == r){
			cout << "Yes\n";
		}
		else cout << "No\n";
	}
	return 0;
}