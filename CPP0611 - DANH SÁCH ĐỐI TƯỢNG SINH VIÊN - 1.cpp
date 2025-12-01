#include<bits/stdc++.h>
using namespace std;

#define ll long long

string ChuanHoaNS(string s){
    if(s[1] == '/') s = "0" + s;
    if(s[4] == '/') s.insert(3, "0");
    return s;
}

int stt = 1;

class SinhVien{
private:
	string ma, ten, lop, ns;
	double gpa;
public:
	friend istream& operator >> (istream &in, SinhVien &s);
	friend ostream& operator << (ostream &out, SinhVien s);
};

istream& operator >> (istream &in, SinhVien &s){
	string res = "B20DCCN";
	string t = to_string(stt);
	for(int i = 0; i < 3 - t.size(); i++){
		res += '0';
	}
	res += t;
	s.ma = res;
	++stt;
	cin.ignore();
	getline(in, s.ten);
	getline(in, s.lop);
	getline(in, s.ns);
	in >> s.gpa;
	return in;
}

ostream& operator << (ostream &out, SinhVien s){
	out << s.ma << " " << s.ten << " " << s.lop << " " << ChuanHoaNS(s.ns) << " " << fixed << setprecision(2) << s.gpa << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}