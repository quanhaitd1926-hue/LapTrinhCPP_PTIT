#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll bcnn(ll a, ll b){
	return (ll)(a * b) / __gcd(a, b);
}

class PhanSo{
private:
	ll tu, mau;
public:
	PhanSo(){
	}

	PhanSo(ll tu, ll mau){
		this->tu = tu;
		this->mau = mau;
	}

	friend istream& operator >> (istream &in, PhanSo &p);
	friend ostream& operator << (ostream &out, PhanSo p);
	void rutgon();
	friend PhanSo operator + (PhanSo a, PhanSo b);
};

istream& operator >> (istream &in, PhanSo &p){
	in >> p.tu >> p.mau;
	return in;
}

ostream& operator << (ostream &out, PhanSo p){
	out << p.tu << "/" << p.mau << endl;
	return out;
}

void PhanSo::rutgon(){
	ll ucln = __gcd(tu, mau);
	tu /= ucln;
	mau /= ucln;
}

PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong;
	ll bc = bcnn(a.mau, b.mau);
	a.tu *= bc / a.mau;
	b.tu *= bc / b.mau;
	tong.tu = a.tu + b.tu;
	tong.mau = bc;
	tong.rutgon();
	return tong;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}