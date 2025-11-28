#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(string s){
	int du = (s[0] - '0') % 11;
	for(int i = 1; i < (int)s.size(); i++){
		du = du * 10 + (s[i] - '0');
		du %= 11;
	}
	if(du == 0) return true;
	else return false;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(check(s)) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}