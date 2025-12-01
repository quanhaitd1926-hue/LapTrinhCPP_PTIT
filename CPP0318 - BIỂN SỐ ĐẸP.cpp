#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define fi first
#define se second
const int mod = 1000000007;

bool ascending(string s)
{
    for (int i = 1; i < 5; ++i)
    {
        if (s[i] <= s[i - 1])
            return 0;
    }
    return 1;
}

bool descending(string s)
{
    for (int i = 1; i < 5; ++i)
    {
        if (s[i] >= s[i - 1])
            return 0;
    }
    return 1;
}

bool beautiful(string s)
{
    return (s[0] == s[1] && s[1] == s[2] && s[3] == s[4]);
}

bool lucky(string s)
{
    for (int i = 0; i < 5; ++i)
    {
        if (s[i] != '6' && s[i] != '8')
            return 0;
    }
    return 1;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string bienso = "";
        for(int i = 5; i < s.size(); i++){
            if(s[i] != '.'){
                bienso += s[i];
            }
        }
        if (ascending(bienso) || descending(bienso) || beautiful(bienso) || lucky(bienso))
        cout << "YES\n";
    else
        cout << "NO\n";
    }
	return 0;
}