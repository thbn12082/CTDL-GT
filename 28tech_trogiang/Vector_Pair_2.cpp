#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        v1.push_back({{x, y}, z});
        v2.push_back(x + y + z);
    }
    for (int x : v2)
    {
        cout << x << " ";
    }
    return 0;
}