#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

ll ucln(ll a, ll b){
    while(b != 0){
        ll q = a % b;
        a = b; 
        b = q;
    }
    return a;
}

ll bcnn(ll a, ll b){
    return (ll)a * b / ucln(a, b);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 1){
            cout << n << endl;
        }
        else if(n == 2){
            cout << n << endl;
        }
        else{
            ll q = bcnn(1, 2);
            for(int i = 3; i <= n; i++){
                q = (ll)bcnn(q, i);
            }
            cout << q << endl;
        }
    }
    return 0;
}