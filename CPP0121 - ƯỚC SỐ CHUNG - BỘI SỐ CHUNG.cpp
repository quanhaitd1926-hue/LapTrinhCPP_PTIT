#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b){
    while(b != 0){
        ll q = a % b;
        a = b; 
        b = q;
    }
    return a;
}

ll lcm(ll a, ll b){
    return (a * b) / gcd(a, b);
}

int main(){
    int t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << endl;

    }
    return 0;
}