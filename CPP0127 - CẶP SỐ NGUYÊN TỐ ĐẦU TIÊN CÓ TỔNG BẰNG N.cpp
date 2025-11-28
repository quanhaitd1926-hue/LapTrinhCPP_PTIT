#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int p[10000001];
int mod = 10e6 + 1;

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
        int check = 0;
        for(int i = 2; i <= n / 2; i++){
            if(p[i] == 1 && p[n - i] == 1){
                cout << i << " " << n - i << " ";
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "-1" << endl;
        }
        else{
            cout << endl;
        }
    }
    return 0;
}