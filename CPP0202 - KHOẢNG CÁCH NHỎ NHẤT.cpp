#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
    	}
    	sort(a, a + n);
    	int max_value = INT_MAX;
    	for(int i = 1; i < n; i++){
    		if(a[i] - a[i - 1] < max_value) max_value = a[i] - a[i - 1];
    	}
    	cout << max_value << endl;
    }

    return 0;
}