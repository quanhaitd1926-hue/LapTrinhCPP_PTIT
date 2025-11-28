#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(string s){
    int res = 0;
    for(char c : s){
        res = (res * 2 + (c - '0')) % 5;
    }
    return res == 0;
}

int main() {
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)) cout << "Yes\n";
        else cout << "No\n";
    }
    
	return 0;
}
