#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int pos, val;
            cin >> pos >> val;
            if (pos >= 0 && pos <= v.size())
            {
                v.insert(v.begin() + pos, val);
            }
            else
            {
                continue;
            }
        }
        if (x == 2)
        {
            int pos;
            cin >> pos;
            if (pos >= 0 && pos < v.size())
            {
                v.erase(v.begin() + pos);
            }
        }
    }
    if (v.size() == 0)
    {
        cout << "EMPTY";
    }
    else
    {
        for (int x : v)
        {
            cout << x << " ";
        }
    }
    return 0;
}
// khi làm việc với v.erase(v.begin() + pos), v.insert(v.begin() + pos, val) chứ không truyền luôn pos vào
