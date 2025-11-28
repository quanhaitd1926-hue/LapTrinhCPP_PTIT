#include <iostream>
using namespace std;

#define ll long long

int main(){
    int bt; cin >> bt;
    while(bt--){
        int n; cin >> n;
        ll sum = 1LL * n * (n + 1) / 2;
        cout << sum << endl;
    }
    
    return 0;
}