#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int dem = 0;
        for(int i = 0; i < s.size() - 1; i++){
            for(int j = i + 1; j < s.size(); j++){
                if(s[i] == s[j]){
                    ++dem;
                }
            }
        }
        dem += s.size();
        cout << dem << endl;
    }
	return 0;
}
