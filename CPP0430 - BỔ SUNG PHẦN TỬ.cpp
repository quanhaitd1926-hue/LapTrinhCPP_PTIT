#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        set<int> se;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        set<int>::iterator it1 = se.begin();
        set<int>::iterator it2 = se.end();
        --it2;
        int len = *it2 - *it1 + 1;
        cout << len - se.size() << endl;
    }
	return 0;
}