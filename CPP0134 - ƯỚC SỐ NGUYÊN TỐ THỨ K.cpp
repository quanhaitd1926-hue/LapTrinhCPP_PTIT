#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int cnt[10001];

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int q = 0;
        for(int i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                cnt[q] = i;
                ++q;
                n /= i;
            }
        }
        if(n != 1){
            cnt[q] = n;
            ++q;
        }
        --k;
        if(k >= q){
            cout << "-1" << endl;
        }
        else cout << cnt[k] << endl;
    }
    return 0;
}