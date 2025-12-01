#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ifstream in("DATA.in", ios::in);
	int n;
	map<int, int> mp;
	while(in >> n){
		mp[n]++;
	}

	for(pair<int, int> it : mp){
		cout << it.first << " " << it.second << endl;
	}

	
	return 0;
}