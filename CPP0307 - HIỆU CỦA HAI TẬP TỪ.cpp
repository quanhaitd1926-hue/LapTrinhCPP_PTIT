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
	cin.ignore();
	while(t--){
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		set<string> se1, se2;
		stringstream ss1(s1);
		stringstream ss2(s2);
		string token1, token2;
		while(ss1 >> token1){
			se1.insert(token1);
		}
		while(ss2 >> token2){
			se2.insert(token2);
		}
		for(string s : se1){
			int check = 1;
			for(string x : se2){
				if(s == x){
					check = 0;
					break;
				}
			}
			if(check == 1){
				cout << s << " ";
			}
		}
		cout << endl;
	}
	return 0;
}