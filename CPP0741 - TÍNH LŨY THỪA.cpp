#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int x, y;
        ll p;
        cin >> x >> y >> p;
        ll tich = 1;
        for(int i = 0; i < y; i++){
            tich *= x % p;
            tich %= p;
        }
        cout << tich << endl;
    }
    return 0;
}