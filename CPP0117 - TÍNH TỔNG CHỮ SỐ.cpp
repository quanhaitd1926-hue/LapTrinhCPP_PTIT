#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long;

int tong(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int sum = tong(n);
        while(sum >= 10){
            sum = tong(sum);
        }
        cout << sum << endl;
    }
    return 0;
}