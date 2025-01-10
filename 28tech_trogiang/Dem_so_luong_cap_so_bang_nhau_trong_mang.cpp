#include <bits/stdc++.h>
using namespace std;
int toHopChapHai(int n)
{
    return n * (n - 1) / 2;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    long long sum = 0;
    for (auto &[x, y] : mp)
    {
        if (y != 1)
        {
            sum += toHopChapHai(y);
        }
    }
    cout << sum;

    return 0;
}