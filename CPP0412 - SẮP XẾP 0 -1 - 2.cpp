#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        multiset<int> se;
        for(int i = 0; i < n; i++){
            int q; cin >> q;
            se.insert(q);
        }
        for(int x : se) cout << x << " ";
        cout << endl;
    }
	return 0;
}