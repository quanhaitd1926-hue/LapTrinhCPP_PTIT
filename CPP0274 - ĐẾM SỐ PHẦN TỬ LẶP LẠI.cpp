#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

#define ll long long

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int x : a){
            mp[x]++;
        }
        int dem = 0;
        for(auto it : mp){
            if(it.second >= 2){
                dem += it.second;
            }
        }
        cout << dem << endl;
    }
	
	return 0;
}
