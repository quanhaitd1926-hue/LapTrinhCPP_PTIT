#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool tn(string s){
	int left = 0, right = s.size() - 1;
	while(left <= right){
		if(s[left] != s[right]) return false;
		++left; --right;
	}
	return true;
}

bool check(string s){
	for(int i = 0; i < (int)s.size(); i++){
		if((s[i] - '0') % 2 != 0) return false;
	}
	return true;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		if(tn(s) && check(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}