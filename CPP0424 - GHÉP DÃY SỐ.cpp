#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t; cin >> t;
    while(t--){
        int k, n; cin >> k >> n;
        int a[k][n];
        vector<int> v;
        for(int i = 0; i < k; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }
        }
        sort(v.begin(), v.end());
        for(int x : v) cout << x << " ";
        cout << endl;
    }
	return 0;
}