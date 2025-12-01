#include <bits/stdc++.h>
using namespace std;

#define ll long long

int pt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return i;
		}
	}
	return n;
}

bool nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}

int *cnt = new int[100001];

void ktao(){
	cnt[1] = 1;
	for(int i = 2; i <= 100000; i++){
		if(nt(i)) cnt[i] = i;
	}
	for(int i = 4; i <= 100000; i++){
		if(i % 2 == 0 && cnt[i] == 0){
			cnt[i] = 2;
		}
		else{
			cnt[i] = pt(i);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ktao();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		for(int i = 1; i <= n; i++){
			cout << cnt[i] << " ";
		}
		cout << endl;
	}
	return 0;
}