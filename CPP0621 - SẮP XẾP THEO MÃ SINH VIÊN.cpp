#include <bits/stdc++.h>
using namespace std;

#define ll long long

class SinhVien{
private:
	string ma, ten, lop, email;
public:
	void nhap();
	void in();
	string getlop(){
		return this->lop;
	}
	string getMa(){
		return this->ma;
	}
	friend istream& operator >> (istream &in, SinhVien &a){
		getline(in, a.ma);
		getline(in, a.ten);
		getline(in, a.lop);
		getline(in, a.email);
		return in;
	}
};

void SinhVien::nhap(){
	getline(cin, ma);
	getline(cin, ten);
	getline(cin, lop);
	getline(cin, email);
}

bool cmp(SinhVien a, SinhVien b){
	return a.getMa() < b.getMa();
}

void SinhVien::in(){
	cout << ma << ' ' << ten << ' ' << lop << ' ' << email << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	vector<SinhVien> v;
	SinhVien a;
	while(cin >> a){
		v.push_back(a);
	}
	sort(v.begin(), v.end(), cmp);
	for(SinhVien x : v) x.in();
	return 0;
}