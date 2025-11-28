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
    double gpa;

    friend istream& operator >> (istream &in, SinhVien &a){
        getline(in, a.ten);
        getline(in, a.lop);
        getline(in, a.ns);
        in >> a.gpa;
        return in;
    }
    friend ostream& operator << (ostream &out, SinhVien a){
        out << "B20DCCN001" << " " << ChuanHoaHT(a.ten) << " " << a.lop << " " << ChuanHoaNS(a.ns) << " " << fixed << setprecision(2) << a.gpa << endl;
        return out;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
