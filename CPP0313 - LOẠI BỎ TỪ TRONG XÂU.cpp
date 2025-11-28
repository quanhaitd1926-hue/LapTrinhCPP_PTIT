#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	string s;
    getline(cin, s);
    string bo; cin >> bo;
    string token;
    string res;
    stringstream ss(s);
    int dem = 0;
    while(ss >> token){
        if(bo != token){
            res += token;
            res += ' ';
        }
        else{
            ++dem;
        }
    }
    cin.ignore();
    cout << res << endl;
	return 0;
}
