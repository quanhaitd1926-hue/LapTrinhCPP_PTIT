#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

bool cmp(int a, int b, int x)
{
	return abs(x - a) < abs(x - b);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		stable_sort(a, a + n, [x](int a, int b)
					{ return cmp(a, b, x); });

		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}