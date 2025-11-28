#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int p[10000001];
int mod = 10e4 + 1;

void sang(){
    for(int i = 0; i <= mod; i++){
        p[i] = 1;
    }
    p[0] = p[1] = 0;
    for(int i = 2; i <= sqrt(mod); i++){
        if(p[i] == 1){
            for(int j = i * i; j <= mod; j += i){
                p[j] = 0;
            }
        }
    }
}

int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for(int i = 2; i <= n; i++){
            if(p[i] == 1) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}