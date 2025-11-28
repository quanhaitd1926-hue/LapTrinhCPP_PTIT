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
        int cnt[256] = {0};
        string s; cin >> s;
        for(char c : s){
            ++cnt[c];
        }
        for(char c : s){
            if(cnt[c] == 1) cout << c;
        }
        cout << endl;
    }
	
	return 0;
}
