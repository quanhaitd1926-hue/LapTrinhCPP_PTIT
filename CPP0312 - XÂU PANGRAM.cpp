#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        set<char> se;
        for(int i = 0; i < s.size(); i++){
            se.insert(s[i]);
        }
        int k; cin >> k;
        int sl = 26 - se.size();
        if(sl <= k) cout << "1\n";
        else cout << "0\n";
    }
	return 0;
}
