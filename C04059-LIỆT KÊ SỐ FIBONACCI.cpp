#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll f[100];

void ktao(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i < 93; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ktao();
	int t; cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		if(a > b) swap(a, b);
		for(int i = a; i <= b; i++){
			cout << f[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}