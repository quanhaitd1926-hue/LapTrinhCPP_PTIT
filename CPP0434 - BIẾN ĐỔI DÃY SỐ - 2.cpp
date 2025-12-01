#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		a[0] = a[0] * a[1];
		a[n - 1] = a[n - 2] * a[n - 1];
		for (int i = 1; i < n - 1; i++)
		{
			a[i] = b[i - 1] * b[i + 1];
		}
		for (int x : a)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}