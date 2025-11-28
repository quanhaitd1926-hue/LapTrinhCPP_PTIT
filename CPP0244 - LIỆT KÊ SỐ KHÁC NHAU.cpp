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
    int n; cin >> n;
    set<int> se;
    for(int i = 0; i < n; i++){
        int q; cin >> q;
        se.insert(q);
    }
    for(int x : se){
        cout << x << " ";
    }
	
	return 0;
}
