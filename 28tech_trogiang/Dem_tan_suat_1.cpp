#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        bool check = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first == x)
            {
                check = false;
                v[i].second++;
            }
        }
        if (check)
        {
            v.push_back({x, 1});
        }
    }
    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}