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
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; cin >> n;
	DoanhNghiep a[n];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++){
		a[i].in();
	}
	return 0;
}