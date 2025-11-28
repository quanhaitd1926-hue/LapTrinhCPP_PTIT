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

struct NhanVien{
    string ten, gt, ns, dc, mst, nkhd;

    friend istream& operator >> (istream &in, NhanVien &a){
        getline(in, a.ten);
        getline(in, a.gt);
        getline(in, a.ns);
        getline(in, a.dc);
        getline(in, a.mst);
        getline(in, a.nkhd);
        return in;
    }

    friend ostream& operator >> (ostream &out, NhanVien a){
        out << "00001" << " " << a.ten << " " << a.gt << " " << ChuanHoaNS(a.ns) << " " << a.dc << " " << a.mst << " " << ChuanHoaNS(a.nkhd) << endl;
        return out;
    }
};

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}
