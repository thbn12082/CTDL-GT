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
    int l, r;
    cin >> l >> r;
    reverse(v.begin() + l, v.begin() + r + 1);
    // hàm này dùng để lật ngược vector từ chỉ số l tới chỉ số r
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    // cout << endl;
    // for (int x : v)
    //     cout << x << " ";
    return 0;
}