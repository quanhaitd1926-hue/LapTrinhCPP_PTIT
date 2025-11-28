#include<bits/stdc++.h>
using namespace std;

#define ll long long

string email(string s){
    string t = s;
    string r = s;
    stringstream ss1(s);
    stringstream ss2(t);
    stringstream ss3(r);
    string token;
    string w;
    string word;
    string res1;
    string res2;
    int dem = 0;
    while(ss1 >> token){
        ++dem;
    }
    int check = 0;
    while(ss2 >> w){
        ++check;
        if(check < dem){
            for(int i = 0; i <= 0; i++){
                res1 += (char)tolower(w[i]);
            }
        }
    }
    res1 += "@ptit.edu.vn";
    int ok = 0;
    while(ss3 >> word){
        ++ok;
        if(ok == dem){
            for(int i = 0; i < word.size(); i++){
                res2 += (char)tolower(word[i]);
            }
        }
    }
    string res = res2 + res1;
    return res;
}

int main() {
	string s; 
    getline(cin, s);
    cout << email(s) << endl;
	return 0;
}
