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
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		set<int> s;
		map<int, int> mp;
		for (int x : a)
		{
			s.insert(x);
			mp[x]++;
		}
		for (int x : b)
		{
			s.insert(x);
			mp[x]++;
		}
		for (int x : s)
			cout << x << " ";
		cout << endl;
		for (pair<int, int> it : mp)
		{
			if (it.se > 1)
			{
				cout << it.fi << " ";
			}
		}
		cout << endl;
	}
	return 0;
}