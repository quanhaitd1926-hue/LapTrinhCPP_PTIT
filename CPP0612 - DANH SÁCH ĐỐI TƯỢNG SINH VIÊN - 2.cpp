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
	out << s.ma << " " << ChuanHoaHT(s.ten) << " " << s.lop << " " << ChuanHoaNS(s.ns) << " " << fixed << setprecision(2) << s.gpa << endl;
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