#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i];
    }

    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        ans = max(ans, arr[i]);
    }

    cout << ans << endl;
}