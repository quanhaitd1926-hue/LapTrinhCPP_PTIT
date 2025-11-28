#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

int main(){
	int n; cin >> n;
	double sum = 0;
	for(int i = 1; i <= n; i++){
		sum += (double)1 / i;
	} 
	cout << fixed << setprecision(4) << sum << endl;
	
	  
	  
	
	
	return 0;
}
