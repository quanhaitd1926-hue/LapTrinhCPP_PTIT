#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string s; getline(cin, s);
        stringstream ss(s); string token;
        vector<string> v;
        while(ss >> token){
            v.push_back(token);
        }
        for(vector<string>::reverse_iterator it = v.rbegin(); it != v.rend(); ++it){
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}