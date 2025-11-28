#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<ll> v;
        for(int i = 0; i < n; i++){
            if(a[i] != 0) v.push_back(a[i]);
        }
        for(ll x : v) cout << x << " ";
        int sl = n - v.size();
        for(int i = 0; i < sl; i++){
            cout << "0" << " ";
        }
        cout << endl;
    }
	return 0;
}