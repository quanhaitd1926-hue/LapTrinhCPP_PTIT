#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}