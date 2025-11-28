#include<bits/stdc++.h>
using namespace std;

#define ll long long

string chuanhoa(string &s){
    stringstream ss(s);
    string token;
    string res;
    getline(ss, token, '/');
    int n = stoi(token);
    if(n < 10){
        res += '0';
        res += to_string(n);
        res += '/';
    }
    else{
        res += token;
        res += '/';
    }
    getline(ss, token, '/');
    int t = stoi(token);
    if(t < 10){
        res += '0';
        res += to_string(t);
        res += '/';
    }
    else{
        res += token;
        res += '/';
    }
    getline(ss, token, '/');
    res += token;
    return res;
}

struct SinhVien{
    string ten, lop, ns;
    float gpa;
};

void nhap(SinhVien &a){
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.ns);
    cin >> a.gpa;
}

void in(SinhVien a){
    cout << "B20DCCN001" << " " << a.ten << " " << a.lop << " " << chuanhoa(a.ns) << " " << fixed << setprecision(2) << a.gpa << endl;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
