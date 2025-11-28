#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	string s; cin >> s;
    string res;
    for(int i = 0; i < s.size(); i++){
        res += (char)tolower(s[i]);
    }
    int dem = 0;
    for(int i = 0; i < res.size(); i++){
        if(res[i] == 'a' || res[i] == 'e' || res[i] == 'i' ||res[i] == 'o' ||res[i] == 'u' ||res[i] == 'y'){
            ++dem;
        }
        else{
            cout << '.' << res[i];
        }
    }
	return 0;
}