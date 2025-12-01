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
		set<char> se;
		if(s[0] == '0'){
			cout << "INVALID\n";
		}
		else{
			int check = 1;
			for(int i = 0; i < s.size(); i++){
				if(isdigit(s[i])){
					se.insert(s[i]);
				}
				else{
					check = 0;
					break;
				}
			}
			if(check == 0){
				cout << "INVALID\n";
			}
			else{
				if(se.size() == 10){
					cout << "YES\n";
				}
				else cout << "NO\n";
			}
		}
	}
	return 0;
}