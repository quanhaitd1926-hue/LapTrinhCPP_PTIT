#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll bcnn(ll a, ll b){
	return (ll)(a * b) / __gcd(a, b);
}

struct PhanSo{
	ll tu, mau;
};

void rutgon(PhanSo &p){
	ll ucln = __gcd(p.tu, p.mau);
	p.tu /= ucln;
	p.mau /= ucln;
}

void process(PhanSo a, PhanSo b){
	PhanSo c, d;
	ll bc = bcnn(abs(a.mau), abs(b.mau));
	c.tu = pow(a.tu * (bc / a.mau) + b.tu * (bc / b.mau), 2);
	c.mau = pow(bc, 2);
	rutgon(c);
	cout << c.tu << "/" << c.mau << " ";
	d.tu = a.tu * b.tu * c.tu;
	d.mau = a.mau * b.mau * c.mau;
	rutgon(d);
	cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}