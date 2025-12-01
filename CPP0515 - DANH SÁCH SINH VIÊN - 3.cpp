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
	string ma, ten, lop, ns;
	float gpa;
};

void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		string t = to_string(i + 1);
		string res = "B20DCCN";
		for(int i = 0; i < 3 - t.size(); i++){
			res += '0';
		}
		res += t;
		a[i].ma = res;
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].lop);
		getline(cin, a[i].ns);
		cin >> a[i].gpa;
	}
}

void in(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].ma << " " << ChuanHoaHT(a[i].ten) << " " << a[i].lop << " " << ChuanHoaNS(a[i].ns) << " " << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}

void sapxep(SinhVien a[], int n){
	sort(a, a + n, cmp);
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}