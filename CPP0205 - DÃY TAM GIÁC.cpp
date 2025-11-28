#include <bits/stdc++.h>
using namespace std;

#define ll long long



int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	set<int> se;
    	for(int i = 0; i < n; i++){
    		cin >> a[i];
    		se.insert(a[i]);
    	}
    	set<int>::iterator it = se.end();
    	--it;
    	cout << *it << endl;
    }


    return 0;
}