#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

string ChuanHoa(string s){
	stringstream ss(s);
	string token;
	string MH = "";
	while(ss >> token){
		MH += (char)toupper(token[0]);
	}
	return MH;
}

struct GiangVien{
	string stt, ten, monhoc;

	void in(){
		cout << stt << " " << ten << " " << ChuanHoa(monhoc) << endl;
	}
};

void nhap(GiangVien a[], int &n){
	for(int i = 0; i < n; i++){
		a[i].stt = "GV";
		if(i + 1 < 10){
			a[i].stt += "0" + to_string(i + 1);
		}
		else{
			a[i].stt += to_string(i + 1);
		}
		getline(cin, a[i].ten);
		getline(cin, a[i].monhoc);
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n; cin >> n;
	cin.ignore();
	GiangVien a[n];
	nhap(a, n);
	int q; cin >> q;
	cin.ignore();
	while(q--){
		string s; getline(cin, s);
		cout << "DANH SACH GIANG VIEN BO MON " << ChuanHoa(s) << ":\n";
		for(int i = 0; i < n; i++){
			if(ChuanHoa(s) == ChuanHoa(a[i].monhoc)){
				a[i].in();
			}
		}
	}
	return 0;
}