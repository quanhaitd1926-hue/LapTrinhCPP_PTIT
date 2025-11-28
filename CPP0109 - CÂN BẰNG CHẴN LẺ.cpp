#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long;

bool check(int n){
    int l = 0, c = 0;
    while(n != 0){
        if(n % 10 % 2 == 0){
            ++c;
        }
        else ++l;
        n /= 10;
    }
    if(l == c) return true;
    else return false;
}

int main(){
    int n; cin >> n;
    int min = pow(10, n - 1);
    int max = pow(10, n) - 1;
    int dem = 0;
    for(int i = min; i <= max; i++){
        if(check(i)){
            cout << i << " ";
            ++dem;
        }
        if(dem != 0 && dem % 10 == 0){
            cout << endl;
        }
    }




    return 0;
}