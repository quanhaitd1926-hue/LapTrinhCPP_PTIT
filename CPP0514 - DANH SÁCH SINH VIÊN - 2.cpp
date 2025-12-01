#include<bits/stdc++.h>
using namespace std;

#define ll long long

string ChuanHoaNS(string s){
    stringstream ss(s);
    string d, m, y;
    getline(ss, d, '/');
    getline(ss, m, '/');
    getline(ss, y, '/');
    if(d.size() == 1) d = '0' + d;
    if(m.size() == 1) m = '0' + m;
    return d + "/" + m + "/" + y;
}

string ChuanHoaHT(string s){
    stringstream ss(s);
    string token;
    string res;
    while(ss >> token){
        for(int i = 0; i < token.size(); i++){
            if(i == 0){
                res += (char)toupper(token[i]);
            }
            else{
                res += (char)tolower(token[i]);
            }
        }
        res += ' ';
    }
    cin.ignore();
    return res;
}

struct SinhVien{
	string ten, lop, ns;
	float gpa;
};

void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		getline(cin, a[i].ns);
		cin >> a[i].gpa;
	}
}

void in(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		string t = to_string(i + 1);
		string res;
		for(int i = 0; i < 3 - t.size(); i++){
			res += '0';
		}
		res += t;
		cout << "B20DCCN" << res << " " << ChuanHoaHT(a[i].ten) << " " << a[i].lop << " " << ChuanHoaNS(a[i].ns) << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}