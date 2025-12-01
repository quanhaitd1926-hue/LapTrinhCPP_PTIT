#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, k, a[100], check = 0;

void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if(i == 0) check = 1;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ktao();
		while(check == 0){
			for(int i = 1; i <= k; i++){
				cout << a[i];
			}
			cout << " ";
			sinh();
		}
		check = 0;
		cout << endl;
	}
	return 0;
}