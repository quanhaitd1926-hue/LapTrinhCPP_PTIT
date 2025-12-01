#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        vector<int> v;
        int dem = 0;
        while(dem < s.size()){
            if(isdigit(s[dem])){
                string res = "";
                while(isdigit(s[dem])){
                    res += s[dem];
                    ++dem;
                }
                int digit = stoi(res);
                v.push_back(digit);
            }
            else{
                ++dem;
            }
        }
        ll sum = 0;
        for(int x : v) sum += x;
        cout << sum << endl;
    }
	return 0;
}