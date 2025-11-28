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
        int n, d; cin >> n >> d;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = d; i < n; i++){
            cout << a[i] << " ";
        }
        for(int i = 0; i < d; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
	
	
	return 0;
}
