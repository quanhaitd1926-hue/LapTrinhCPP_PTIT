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
		while(s.size() > 1){
			ll sum = 0;
			for(int i = 0; i < s.size(); i++){
				sum += s[i] - '0';
			}
			s = to_string(sum);
		}
		if(s == "9"){
			cout << "1\n";
		}
		else cout << "0\n";
	}
	return 0;
}