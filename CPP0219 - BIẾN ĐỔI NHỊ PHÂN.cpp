#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m], b[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				b[i][j] = a[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				if(b[i][j] == 1){
					for(int k = 0; k < n; k++){
						for(int l = 0; l < m; l++){
							if(k == i || l == j){
								a[k][l] = 1;
							}
						}
					}
				}
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}