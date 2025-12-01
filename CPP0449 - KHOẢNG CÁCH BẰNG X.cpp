#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

int cnt[10000001] = {0};

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
			cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			cnt[a[i]] = 1;
		}
		sort(a, a + n);
		int check = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			if (a[i] - x < 0)
				break;
			if (cnt[a[i] - x] == 1)
			{
				check = 1;
				break;
			}
			
		}
		if (check == 1)
			cout << "1\n";
		else
			cout << "-1\n";
		memset(cnt, 0, sizeof(cnt));
	}
	return 0;
}