#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

void ChuanHoa(string &s){
    stringstream ss(s);
    string w;
    string res = "";
    while(ss >> w){
        for(int i = 0; i < w.size(); i++){
            res += (char)tolower(w[i]);
        }
        res += " ";
    }
    res.pop_back();
    s = res;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    map<string, int> mp;
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        ChuanHoa(s);
        stringstream ss(s);
        string w;
        string email = "";
        vector<string> v;
        while(ss >> w){
            v.push_back(w);
        }
        email += v[v.size() - 1];
        for(int i = 0; i < v.size() - 1; i++){
            email += v[i][0];
        }
		mp[email]++;
		if(mp[email] == 1){
			cout << email << "@ptit.edu.vn" << endl;
		}
		else cout << email << mp[email] << "@ptit.edu.vn" << endl;
    }
    
	return 0;
}