#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct PhanSo{
    ll tu, mau;
};

void nhap(PhanSo &p){
    cin >> p.tu >> p.mau;
}

void rutgon(PhanSo &p){
    ll g = __gcd(p.tu, p.mau);
    p.tu /= g;
    p.mau /= g;
}

void in(PhanSo p){
    cout << p.tu << "/" << p.mau << endl;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
