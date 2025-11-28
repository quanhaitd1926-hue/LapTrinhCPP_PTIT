#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void pt(ll n){
    int q;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            q = i;
            n /= i;
        }
    }
    if(n == 1) cout << q << endl;
    else cout << n << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        pt(n);
    }
    return 0;
}