#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
    	int n; ll k; cin >> n >> k;
    	int sum = 0;
    	for(int i = 1; i <= n; i++){
    		sum += i % k;
    	}
    	cout << sum << endl;
    }
    return 0;
}