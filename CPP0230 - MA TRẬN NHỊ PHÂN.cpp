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
    int a[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
    }
    int dem = 0;
    for(int i = 0; i < n; i++){
        pair<int, int> pm;
        pm.first = pm.second = 0;
        for(int j = 0; j < 3; j++){
            if(a[i][j] == 1){
                ++pm.first;
            }
            else ++pm.second;
        }
        if(pm.first > pm.second) ++dem;
    }
    cout << dem << endl;
	
	return 0;
}
