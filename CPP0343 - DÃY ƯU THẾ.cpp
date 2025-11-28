#include<bits/stdc++.h>
using namespace std;

#define ll long long

int check(string s){
    int q =  s[s.size() - 1] - '0';
    return q;
}

int main() {
	int t; cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string token;
        int dem = 0, c = 0, l = 0;
        while(ss >> token){
            ++dem;
            if(check(token) % 2 == 0) ++c;
            else ++l;
        }
        if(c > l && dem % 2 == 0) cout << "YES\n";
        else if(l > c && dem % 2 != 0) cout << "YES\n";
        else cout << "NO\n";
        
    }
	return 0;
}
