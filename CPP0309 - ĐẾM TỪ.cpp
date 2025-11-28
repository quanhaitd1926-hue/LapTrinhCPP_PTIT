#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		stringstream ss(s);
		string token;
		int dem = 0;
		while(ss >> token){
			++dem;
		}
		cout << dem << endl;
	}
	return 0;
}