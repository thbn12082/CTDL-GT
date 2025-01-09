#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<char, int>> v;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        bool check = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].first == x)
            {
                check = false;
                v[i].second++;
                break;
            }
        }
        if (check)
        {
            v.push_back({x, 1});
        }
    }
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}