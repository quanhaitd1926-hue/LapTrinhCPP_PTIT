#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool tn(int n){
    if(n <= 1) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int a, b; cin >> a >> b;
    if(a > b) swap(a, b);
    for(int i = a + 1; i < b; i++){
        if(tn(i)) cout << i << " ";
    }
    return 0;
}