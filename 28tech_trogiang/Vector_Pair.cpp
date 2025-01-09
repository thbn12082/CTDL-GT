#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> v1;
    vector<double> v2;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back({x, y});
        v2.push_back(sqrt(pow(x, 2) + pow(y, 2)));
    }
    for (double x : v2)
    {
        cout << fixed << setprecision(2) << x << " ";
    }
    return 0;
}