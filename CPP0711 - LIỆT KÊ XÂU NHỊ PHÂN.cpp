#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[100];

void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			for(int l = 1; l <= n; l++){
				cout << a[l];
			}
			cout << " ";
		}
		else{
			Try(i + 1);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}