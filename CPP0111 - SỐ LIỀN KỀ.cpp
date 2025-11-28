#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long;

bool check(string s){
    for(int i = 0; i < s.size() - 1; i++){
        if(abs(s[i] - s[i + 1]) != 1) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}