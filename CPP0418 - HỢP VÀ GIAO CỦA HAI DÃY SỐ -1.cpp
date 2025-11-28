#include<bits/stdc++.h>
using namespace std;

#define ll long long

int cnt[10000001] = {0};

int main() {
	int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        int maxvalue = INT_MIN;
        for(int i = 0; i < n; i++){
            cnt[a[i]]++;
            if(a[i] > maxvalue) maxvalue = a[i];
        }
        for(int i = 0; i < m; i++){
            cnt[b[i]]++;
            if(b[i] > maxvalue) maxvalue = b[i];
        }
        for(int i = 0; i <= maxvalue; i++){
            if(cnt[i] >= 1) cout << i << " ";
        }
        cout << endl;
        for(int i = 0; i <= maxvalue; i++){
            if(cnt[i] >= 2) cout << i << " ";
        }
        cout << endl;
        for(int i = 0; i <= maxvalue; i++){
            cnt[i] = 0;
        }
    }
	return 0;
}