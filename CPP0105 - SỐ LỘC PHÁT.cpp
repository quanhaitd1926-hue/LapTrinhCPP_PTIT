#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int n){
    while(n != 0){
        int q = n % 10;
        if(q != 0 && q != 6 && q != 8) return false;
        n /= 10;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(check(n)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}