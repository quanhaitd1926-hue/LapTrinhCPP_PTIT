#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int len = s.size();
        int j = 0;
        while(j < len){
            int dem = 1;
            for(int i = j; i < s.size(); i++){
                if(s[i] == s[i + 1]) ++dem;
                else{
                    cout << s[i] << dem;
                    j = i + 1;
                    break;
                }
            }
        }
        cout << endl;
    }
	return 0;
}