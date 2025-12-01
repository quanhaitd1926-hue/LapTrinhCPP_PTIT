#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[100], used[100] = {0};

void in(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << " ";
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == 0){
			a[i] = j;
			used[j] = 1;
			if(i == n){
				in();
			}
			else{
				Try(i + 1);
			}
			used[j] = 0;
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