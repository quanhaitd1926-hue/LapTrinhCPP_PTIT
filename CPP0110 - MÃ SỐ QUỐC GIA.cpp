#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string t = "084";
        int chiso = s.find(t);
        s.erase(chiso, 3);
        cout << s << endl;
    }
    return 0;
}