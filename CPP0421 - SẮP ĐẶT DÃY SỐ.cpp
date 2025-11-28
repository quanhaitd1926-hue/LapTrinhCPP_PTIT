#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        unordered_set<ll> s(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if(s.count(i)) a[i] = i;
            else a[i] = -1;
        }
        
        for(ll x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}