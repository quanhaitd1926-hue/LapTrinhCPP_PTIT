#include<bits/stdc++.h>
using namespace std;

#define ll long long

class PhanSo{
private:
	ll tu, mau;
public:
	PhanSo(ll tu, ll mau){
	}
	friend istream& operator >> (istream &in, PhanSo &p);
	friend ostream& operator << (ostream &out, PhanSo p);
	void rutgon();
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

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}