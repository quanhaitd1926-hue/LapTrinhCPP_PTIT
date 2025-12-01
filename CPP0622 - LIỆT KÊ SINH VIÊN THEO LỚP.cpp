#include <bits/stdc++.h>
using namespace std;

#define ll long long

class SinhVien{
private:
	string masv, ten, lop, email;
public:
	void nhap();
	void in();
	string getLop(){
		return this->lop;
	}
};

void SinhVien::nhap(){
	getline(cin, masv);
	getline(cin, ten);
	getline(cin, lop);
	getline(cin, email);
}

void SinhVien::in(){
	cout << masv << " " << ten << " " << lop << " " << email << endl;
}

int main(){
    int n; cin >> n;
    SinhVien a[n];
    for(int i = 0; i < n; i++){
    	scanf("\n");
    	a[i].nhap();
    }
    int q; cin >> q;
    while(q--){
    	string s; cin >> s;
    	cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
    	for(int i = 0; i < n; i++){
    		if(s == a[i].getLop()){
    			a[i].in();
    		}
    	}
    }
    return 0;
}