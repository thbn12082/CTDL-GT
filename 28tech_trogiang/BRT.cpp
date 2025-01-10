#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    map<int, int> mp;
    for (int i = 1; i < n - 1; i++)
    {
        mp[abs(a[i] - a[i + 1])]++;
        mp[abs(a[i] - a[i - 1])]++;
    }
    auto it = mp.begin();
    cout << it->first << " " << it->second;
    return 0;
}