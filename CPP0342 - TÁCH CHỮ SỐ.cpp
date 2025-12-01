#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int sum = 0;
        vector<char> v;
        for(int i = 0; i < s.size(); i++){
            if(!isdigit(s[i])){
               v.push_back(s[i]);
            }
            else{
                sum += s[i] - '0';
            }
        }
        sort(v.begin(), v.end());
        for(char x : v) cout << x;
        cout << sum << endl;
    }
	return 0;
}