#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9 + 7;

void thaydoi(int a[], int n) {
    for (int i = 0; i < n / 2; i++)
        swap(a[i], a[n - i - 1]);
}

ll binpow(ll a, int n) {
    if (n == 0) return 1;
    ll X = binpow(a, n / 2);
    X = (X * X) % mod;
    if (n % 2) X = (X * a) % mod;
    return X;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        thaydoi(a, n);
        
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum = (sum + (1LL * a[i] * binpow(x, i)) % mod) % mod;
        }
        cout << sum << '\n';
    }
    return 0;
}