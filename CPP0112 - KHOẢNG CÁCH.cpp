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
        pair<double, double> pm1;
        pair<double, double> pm2;
        cin >> pm1.first >> pm1.second;
        cin >> pm2.first >> pm2.second;
        double x = (double)(pm2.first - pm1.first);
        double y = (double)(pm2.second - pm1.second);
        double khoangcach = sqrt(pow(x, 2) + pow(y, 2));
        cout << fixed << setprecision(4) << khoangcach << endl;
    }
    return 0;
}