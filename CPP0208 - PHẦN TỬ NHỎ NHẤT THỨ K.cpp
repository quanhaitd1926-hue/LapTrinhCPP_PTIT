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
        int n, k; cin >> n >> k;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int q; cin >> q;
            v.push_back(q);
        }
        --k;
        sort(v.begin(), v.end());
        vector<int>::iterator it = v.begin() + k;
        cout << *it << endl;
    }
	
	return 0;
}
