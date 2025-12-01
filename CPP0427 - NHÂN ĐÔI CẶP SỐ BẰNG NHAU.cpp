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
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++)
		{
			if (a[i] != 0)
			{
				if (a[i] == a[i + 1])
				{
					a[i] *= 2;
					a[i + 1] = 0;
				}
				else
				{
					continue;
				}
			}
		}
		vector<int> v;
		int cnt = 0;
		for (int x : a)
		{
			if (x != 0)
			{
				v.push_back(x);
				++cnt;
			}
		}
		for (int x : v)
			cout << x << " ";
		for (int i = cnt; i < n; i++)
		{
			cout << 0 << " ";
		}
		cout << endl;
	}
	return 0;
}