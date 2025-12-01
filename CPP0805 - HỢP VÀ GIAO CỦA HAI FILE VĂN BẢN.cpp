#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ifstream in1;
	in1.open("DATA1.in", ios::in);
	ifstream in2;
	in2.open("DATA2.in", ios::in);
	string s;
	set<string> se1;
	set<string> se2;
	map<string, int> mp;
	while(in1 >> s){
		string tmp = "";
		for(int i = 0; i < (int)s.size(); i++){
			tmp += tolower(s[i]);
		}
		se1.insert(tmp);
	}
	while(in2 >> s){
		string tmp = "";
		for(int i = 0; i < (int)s.size(); i++){
			tmp += tolower(s[i]);
		}
		se2.insert(tmp);
	}
	set<string> se;
	for(string x : se1){
		se.insert(x);
		mp[x]++;
	}
	for(string x : se2){
		se.insert(x);
		mp[x]++;
	}
	for(string x : se) cout << x << " ";
	cout << endl;
	for(pair<string, int> it : mp){
		if(it.second >= 2) cout << it.first << " ";
	}

	
	return 0;
}