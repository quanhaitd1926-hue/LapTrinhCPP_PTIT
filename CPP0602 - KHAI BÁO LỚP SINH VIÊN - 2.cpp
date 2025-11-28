#include <bits/stdc++.h>
using namespace std;

#define ll long long

void ChuanHoa(string &s){
	string name = "";
	stringstream ss(s);
	string token;
	while(ss >> token){
		name += (char)toupper(token[0]);
		for(int i = 1; i < (int)token.size(); i++){
			name += (char)tolower(token[i]);
		}
		name += " ";
	}
	name.pop_back();
	s = name;
}

string NS(string s){
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
	return s;
}

string ten(string s){
	stringstream ss(s);
	string token, res;
	while(ss >> token){
		res = token;
	}
	return res;
}

int demtu(string s){
	stringstream ss(s);
	int dem = 0;
	string token;
	while(ss >> token){
		++dem;
	}
	return dem;
}

string ho(string s){
	int length = demtu(s);
	stringstream ss(s);
	string token, res;
	int dem = 1;
	while(ss >> token){
		if(dem == length){
			break;
		}
		res += token;
		++dem;
		if(dem < length){
			res += " ";
		}
	}
	return res;
}

bool cmp(string a, string b){
	if(ten(a) != ten(b)) return ten(a) < ten(b);
	else{
		return ho(a) < ho(b);
	}
}

class SinhVien{
private:
	string ten, lop, ns;
	double gpa;
public:
	friend istream& operator >> (istream &in, SinhVien &a){
		getline(in, a.ten);
		getline(in, a.lop);
		in >> a.ns >> a.gpa;
		return in;
	}
	friend ostream& operator << (ostream &out, SinhVien a){
		cout << "B20DCCN001" << " " << a.ten << " " << a.lop << " " << NS(a.ns) << " " << fixed << setprecision(2) << a.gpa << endl;
		return out;
	}
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}