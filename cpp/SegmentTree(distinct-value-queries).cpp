#include <bits/stdc++.h>
using namespace std;
#define long long long
const int N = 2e5;
const long inf = 1e18L;
bool good(vector<string> & v)
{
    int n = v.size(); int m = v[0].size();
    int g = 0, w = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i][0] == 'G')
        {
            if (g == 0)g++;
            else
            {
                if (v[i - 1][0] == 'G')g++;
                else return false;
            }
        }
        else if (v[i][0] == 'W')
        {
            if (w == 0)w++;
            else
            {
                if (v[i - 1][0] == 'W')w++;
                else return false;
            }
        }
        else
        {
            if (s == 0)s++;
            else
            {
                if (v[i - 1][0] == 'S')s++;
                else return false;
            }
        }
        for (int j = 0; j < m; j++)if (v[i][j] != v[i][0])return false;
    }
    return (g == w && w == s);
}
int main()
{
    int n, m; cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];
    if (good(v))cout << "YES\n";
    else
    {
        vector<string> rot(m, string(n, '#'));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)rot[j][i] = v[i][j];
        }
        if (good(rot))cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
