#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

void lower(char &c){
	c = tolower(c);
}

void upper(char &c){
	c = toupper(c);
}

int main(){
	int t; cin >> t;
	while(t--){
		char c; cin >> c;
		if(islower(c)){
			upper(c);
			cout << c << endl;
		}
		else{
			lower(c);
			cout << c << endl;
		}
	}
	
	return 0;
}
