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
        set<int> se;
        for(int i = 0; i < n; i++){
            while(a[i] != 0){
                int q = a[i] % 10;
                se.insert(q);
                a[i] /= 10;
            }
        }
        for(int x : se){
            cout << x << " ";
        }
        cout << endl;
    }
	return 0;
}