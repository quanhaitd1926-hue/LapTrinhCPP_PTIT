#include <bits/stdc++.h>
using namespace std;

#define ll long long

int bs(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            r = m - 1;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int check = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == x){
                check = 1;
                cout << i + 1 << endl;
                break;
            }
            
        }
        if(check == 0) cout << "-1\n";
    }
    return 0;
}