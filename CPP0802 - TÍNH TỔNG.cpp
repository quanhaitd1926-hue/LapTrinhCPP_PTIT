#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(string s){
	if(s.size() > 10) return false;
	for(int i = 0; i < s.size(); i++){
		if(!isdigit(s[i])) return false;
	}
	return true;
}

int main(){
	ifstream in;
	in.open("DATA.in");

	string s;
	ll sum = 0;
	while(in >> s){
		if(check(s)){
			sum += stoi(s);
		}
	}
	cout << sum << endl;
	return 0;
}