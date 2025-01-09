#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;
    for (auto &[x, y] : mp)
    {
        if (mp.find(x + k) != mp.end())
        {
            cnt += y * mp[x + k];
        }
        if (mp.find(x - k) != mp.end())
        {
            cnt += y * mp[x - k];
        }
    }
    cout << cnt / 2;
    return 0;
}