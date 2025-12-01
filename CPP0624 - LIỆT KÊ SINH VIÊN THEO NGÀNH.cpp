#include <bits/stdc++.h>
using namespace std;

#define ll long long

class SinhVien{
private:
	string masv, ten, lop, email;
public:
	void nhap();
	void in();
	string getMasv(){
		return this->masv;
	}
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

string solve(string s){
    for (auto &c : s) c = tolower(c);
    if (s == "ke toan") return "DCKT";
    if (s == "cong nghe thong tin") return "DCCN";
    if (s == "an toan thong tin") return "DCAT";
    if (s == "vien thong") return "DCVT";
    if (s == "dien tu") return "DCDT";
    return "";
}


string ktao(string s){
    return s.substr(3, 4);
}


char chiso(string s){
	char c; c = s[0];
	return c;
}

int main(){
    int n; cin >> n;
    cin.ignore();
    SinhVien a[n];
    for(int i = 0; i < n; i++){
    	a[i].nhap();
    }
    int q; cin >> q;
	cin.ignore();
    while(q--){
    	string s; getline(cin, s);
		string t = s;
		stringstream ss1(t);
		string w;
		vector<string> v;
		while(ss1 >> w){
			v.push_back(w);
		}
    	stringstream ss(s);
    	string token;
    	string res;
    	int dem = 0;
    	while(ss >> token){
			for(int i = 0; i < token.size(); i++){
				res += toupper(token[i]);
			}
			if(dem < v.size() - 1){
				res += " ";
			}
			++dem;
    	}
		int r = 0;
		cout << "DANH SACH SINH VIEN NGANH " << res << ":\n";
		for(int i = 0; i < n; i++){
			if(ktao(a[i].getMasv()) == solve(s)){
				if((ktao(a[i].getMasv()) == "DCCN" && chiso(a[i].getLop()) == 'E') || (ktao(a[i].getMasv()) == "DCAT" && chiso(a[i].getLop()) == 'E')){
					++r;
				}
				else{
					a[i].in();
				}
			}
		}
    }
    return 0;
}