#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i % k;
        }
        if(sum == k) cout << "1\n";
        else cout << "0\n";
    }
	return 0;
}
