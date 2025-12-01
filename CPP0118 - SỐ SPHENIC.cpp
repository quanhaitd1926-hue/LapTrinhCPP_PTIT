#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(int n){
	int cnt = -1, dem = 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				n /= i;
				if(i != cnt){
					cnt = i;
					++dem;
				}
				else return false;
			}
		}
	}
	if(n != 1) ++dem;
	if(dem == 3) return true;
	else return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		if(check(n)) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}