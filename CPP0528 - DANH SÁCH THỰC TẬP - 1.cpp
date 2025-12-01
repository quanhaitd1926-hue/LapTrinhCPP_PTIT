#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

struct NhanVien{
	int stt;
	string id, ten, lop, email, dn;

	void in(){
		cout << stt << " " << id << " " << ten << " " << lop << " " << email << " " << dn << endl;
	}
};

void nhap(NhanVien a[], int &n){
	for(int i = 0; i < n; i++){
		a[i].stt = i + 1;
		getline(cin, a[i].id);
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		getline(cin, a[i].email);
		getline(cin, a[i].dn);
	}
}

bool cmp(NhanVien a, NhanVien b){
	return a.ten < b.ten;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; cin >> n;
	cin.ignore();
	NhanVien a[n];
	nhap(a, n);
	sort(a, a + n, cmp);
	int q; cin >> q;
	while(q--){
		string s; cin >> s;
		for(int i = 0; i < n; i++){
			if(a[i].dn == s){
				a[i].in();
			}
		}
	}
	return 0;
}