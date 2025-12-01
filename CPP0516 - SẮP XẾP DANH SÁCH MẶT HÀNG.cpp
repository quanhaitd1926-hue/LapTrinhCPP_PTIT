#include<bits/stdc++.h>
using namespace std;

#define ll long long

struct MatHang{
	int ma;
	string hang, nhomhang;
	double giamua, giaban;
};

void nhap(MatHang a[], int n){
	for(int i = 0; i < n; i++){
		a[i].ma = i + 1;
		cin.ignore();
		getline(cin, a[i].hang);
		getline(cin, a[i].nhomhang);
		cin >> a[i].giamua >> a[i].giaban;
	}
}

void in(MatHang a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].ma << " " << a[i].hang << " " << a[i].nhomhang << " " << fixed << setprecision(2) << (double)a[i].giaban - a[i].giamua << endl;
	}
}

bool cmp(MatHang a, MatHang b){
	double lna = (double)a.giaban - a.giamua;
	double lnb = (double)b.giaban - b.giamua;
	return lna > lnb;
}

void sapxep(MatHang a[], int n){
	sort(a, a + n, cmp);
}

int main(){
    int n; cin >> n;
	MatHang a[n];
	nhap(a, n);
	sapxep(a, n);
	in(a, n);
    return 0;
}