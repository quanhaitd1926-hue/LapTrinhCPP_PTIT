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
        set<int> s;
        for(int i = 0; i < n; i++){
            int q; cin >> q;
            s.insert(q);
        }
        set<int>::iterator it = s.end();
        --it;
        cout << *it << endl;
    }
	return 0;
}