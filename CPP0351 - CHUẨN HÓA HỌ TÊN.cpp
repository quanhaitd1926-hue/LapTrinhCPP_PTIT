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
        res += (char)toupper(w[0]);
        for(int i = 1; i < w.size(); i++){
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
	
	int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cin.ignore();
        string s; getline(cin, s);
        ChuanHoa(s);
        stringstream ss(s);
        string w;
        vector<string> v;
        while(ss >> w){
            v.push_back(w);
        }
        if(n == 1){
            cout << v[v.size() - 1] << " ";
            for(int i = 0; i < v.size() - 1; i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else if(n == 2){
            for(int i = 1; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << v[0] << endl;
        }  
    }
	return 0;
}