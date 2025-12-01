#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

ll F[100];
ll checkFibo[10001];

void ktao(){
	for(int i = 0; i <= 10001; i++){
		checkFibo[i] = 0;
	}
	F[0] = 0; checkFibo[0] = 1;
	F[1] = 1; checkFibo[1] = 1;
	for(int i = 2; i <= 20; i++){
		F[i] = F[i - 1] + F[i - 2];
		checkFibo[F[i]] = 1;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ktao();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			if(checkFibo[a[i]]) cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}