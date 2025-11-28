#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool bs(int a[], int n, int x){
    int l = 0, r = n - 1, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            return true;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        set<int> se;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            se.insert(a[i]);
        }
        if(se.size() == 1) cout << "-1\n";
        else{
            set<int>::iterator it = se.begin();
            cout << *it << " ";
            ++it;
            cout << *it << endl;
        }
    }
    return 0;
}