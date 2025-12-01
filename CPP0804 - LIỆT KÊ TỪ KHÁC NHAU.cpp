#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ifstream in("VANBAN.in", ios::in);
	string s;
	set<string> se;
	string res;
	while(in >> s){
		string res = "";
		for(int i = 0; i < (int)s.size(); i++){
			res += tolower(s[i]);
		}
		se.insert(res);
	}
	for(string x : se) cout << x << endl;

	
	return 0;
}