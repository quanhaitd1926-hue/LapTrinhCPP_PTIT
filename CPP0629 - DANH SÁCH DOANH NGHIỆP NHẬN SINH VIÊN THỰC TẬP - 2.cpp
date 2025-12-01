#include <bits/stdc++.h>
using namespace std;

#define ll long long

class DoanhNghiep{
private:
	string ma, ten;
	int sl;
public:
	void nhap();
	void in();
	int getSl(){
		return this->sl;
	}
	string getMa(){
		return this->ma;
	}
};

void DoanhNghiep::nhap(){
	cin.ignore();
	getline(cin, ma);
	getline(cin, ten);
	cin >> sl;
}

void DoanhNghiep::in(){
	cout << ma << " " << ten << " " << sl << endl;
}

bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.getSl() != b.getSl()){
		return a.getSl() > b.getSl();
	}
	else{
		return a.getMa() < b.getMa();
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; cin >> n;
	DoanhNghiep dn[n];
	for(int i = 0; i < n; i++){
		dn[i].nhap();
	}
	sort(dn, dn + n, cmp);
	int q; cin >> q;
	while(q--){
		int a, b; cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << ' ' << "DEN" << ' ' << b << ' ' << "SINH VIEN:" << endl;
		for(int i = 0; i < n; i++){
			if(dn[i].getSl() >= a && dn[i].getSl() <= b){
				dn[i].in();
			}
		}
	}
	return 0;
}