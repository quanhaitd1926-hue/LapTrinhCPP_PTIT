#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

bool cmp(string a, string b){
	if(a.size() != b.size()) return a.size() > b.size();
	else return a > b;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		for(int i = 0; i < s.size(); i++){
			if(!isdigit(s[i])) s[i] = ' ';
		}
		stringstream ss(s);
		vector<string> v;
		string token;
		while(ss >> token){
			while(token.size() > 1 && token[0] == '0'){
				token.erase(0, 1);
			}
			v.push_back(token);
		}
		sort(v.begin(), v.end(), cmp);
		cout << v[0] << endl;
	}
	return 0;
}