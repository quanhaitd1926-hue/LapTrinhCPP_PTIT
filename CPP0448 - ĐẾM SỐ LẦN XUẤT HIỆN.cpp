#include <bits/stdc++.h>
using namespace std;

#define ll long long

int bs1(int a[], int n, int x){
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

int bs2(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            res = m;
            l = m + 1;
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
        if(bs1(a, n, x) == -1) cout << "-1\n";
        else if(bs1(a, n, x) == bs2(a, n, x)) cout << "1\n";
        else{
            cout << bs2(a, n, x) - bs1(a, n, x) + 1 << endl;
        }
        
    }
    return 0;
}