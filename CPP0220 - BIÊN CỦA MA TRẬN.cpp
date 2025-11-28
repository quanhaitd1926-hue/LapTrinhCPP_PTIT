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
        int a[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
                    cout << a[i][j] << " ";
                }
                else cout << " ";
            }
            cout << endl;
        }
    }
	return 0;
}
