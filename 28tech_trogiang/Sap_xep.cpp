#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // sử dụng iterator
    for (auto i = v.begin(); i < v.end(); ++i)
    {
        cout << *i << ' ';
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    // for (int x : v)
    // {
    //     cout << x << ' ';
    // }
    for (auto x = v.begin(); x < v.end(); x++)
    {
        cout << *x << ' ';
    }
    cout << endl;

    return 0;
}