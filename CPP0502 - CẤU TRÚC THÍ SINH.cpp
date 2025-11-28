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

struct ThiSinh{
    string ten, ns;
    float diem1, diem2, diem3;
};

void nhap(ThiSinh &t){
        getline(cin, t.ten);
        getline(cin, t.ns);
        cin >> t.diem1 >> t.diem2 >> t.diem3;
}

void in(ThiSinh t){
    cout << t.ten << " " << chuanhoa(t.ns) << " " << fixed << setprecision(1) << (float)(t.diem1 + t.diem2 + t.diem3) << endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
