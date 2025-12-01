#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

bool cmp(int a, int b)
{
	return to_string(a) + to_string(b) > to_string(b) + to_string(a);
}

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
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n, cmp);
		for (int i = 0; i < n; i++)
		{
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
}