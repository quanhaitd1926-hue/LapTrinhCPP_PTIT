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
		int a[n][n];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		map<int, int> mp;
		for(int i = 0; i < n; i++){
            set<int> se;
            for(int j = 0; j < n; j++){
				if(se.count(a[i][j]) == 0){
					mp[a[i][j]]++;
				}
				se.insert(a[i][j]);
			}
        }
		int cnt = 0;
		for(auto it : mp){
			if(it.second == n){
				++cnt;
			}
		}
		cout << cnt << endl;	
	}
	return 0;
}