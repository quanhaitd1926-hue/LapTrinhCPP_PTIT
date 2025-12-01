#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

string a[20];

void ktao(){
    a[2] = "ABC";
    a[3] = "DEF";
    a[4] = "GHI";
    a[5] = "JKL";
    a[6] = "MNO";
    a[7] = "PQRS";
    a[8] = "TUV";
    a[9] = "WXYZ";
}

void ChuanHoa(string &s){
    for(int i = 0; i < s.size(); i++){
        s[i] = (char)toupper(s[i]);
    }
}

bool check(string s){
    int l = 0, r = s.size() - 1;
    while(l <= r){
        if(s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    ktao();
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        ChuanHoa(s);
        string res = "";
        for(int i = 0; i < s.size(); i++){
            for(int j = 2; j <= 9; j++){
                int kt = 0;
                for(char x : a[j]){
                    if(s[i] == x){
                        kt = 1;
                        break;
                    }
                }
                if(kt == 1){
                    res += to_string(j);
                    break;
                }
            }
        }
        if(check(res)) cout << "YES\n";
        else cout << "NO\n";
    }
	return 0;
}