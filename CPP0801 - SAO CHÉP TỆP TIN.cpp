#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("PTIT.in", "r", stdin);
	freopen("PTIT.out", "w", stdout);
	
	string s;
	vector<string> v;
	while(getline(cin, s)){
		v.push_back(s);
	}
	for(string x : v) cout << x << endl;
	
	return 0;
}