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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int to = 1e9;
        for(int i = 1; i < n; i++){
            if(a[i] - a[i - 1] < to){
                to = a[i] - a[i - 1];
            }
        }
        cout << to << endl;
    }
	
	return 0;
}
