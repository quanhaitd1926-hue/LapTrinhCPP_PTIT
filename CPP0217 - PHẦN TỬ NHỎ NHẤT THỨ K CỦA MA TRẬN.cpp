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
		int n, k; cin >> n >> k;
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		vector<int> v;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				v.push_back(a[i][j]);
			}
		}
		--k;
		sort(v.begin(), v.end());
		vector<int>::iterator it = v.begin() + k;
		cout << *it << endl;
	}
	return 0;
}