#include <bits/stdc++.h>
using namespace std;
bool checkSoKhongGiam(int n)
{
    string x = to_string(n);
    for (int i = 0; i < x.length() - 1; i++)
    {
        if (x[i] < x[i + 1])
        {
            return false;
        }
    }
    return true;
}
bool cmp(pair<int, int> x, pair<int, int> y)
{
    if (x.second != y.second)
    {
        return -(x.second - y.second);
    }
    else
    {
        return x.first - y.first;
    }
}
int main()
{
    int n;
    map<int, int> mp;
    vector<pair<int, int>> v;
    while (cin >> n)
    {
        if (checkSoKhongGiam(n))
        {
            mp[n]++;
        }
    }
    for (auto &[x, y] : mp)
    {
        v.push_back({x, y});
    }
    sort(v.begin(), v.end(), cmp);
    for (pair<int, int> x : v)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}