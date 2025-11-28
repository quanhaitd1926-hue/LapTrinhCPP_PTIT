#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int n; cin >> n;
    cin.ignore();
    string s;
    set<string> se;
    for(int i = 0; i < n; i++){
        getline(cin, s);
        se.insert(s);
    }
    cout << se.size() << endl;
    
	return 0;
}
