#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

bool nt(int n){
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        if(a > b){
            int q = a;
            a = b;
            b = q;
        }
        for(int i = a; i <= b; i++){
            if(nt(i)) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}