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
};

void SinhVien::nhap(){
	getline(cin, ma);
	getline(cin, ten);
	getline(cin, lop);
	getline(cin, email);
}

bool cmp(SinhVien a, SinhVien b){
	if(a.getlop() != b.getlop()) return a.getlop() < b.getlop();
	else{
		return a.getMa() < b.getMa();
	}
}

void SinhVien::in(){
	cout << ma << ' ' << ten << ' ' << lop << ' ' << email << endl;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; cin >> n;
	cin.ignore();
	SinhVien a[n];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		a[i].in();
	}
	return 0;
}