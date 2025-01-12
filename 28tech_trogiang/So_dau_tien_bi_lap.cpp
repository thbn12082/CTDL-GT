#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    // cách 1
    //  map<int, int> mp;
    //  vector<int> v;
    //  for (int i = 0; i < n; i++)
    //  {
    //      cin >> a[i];
    //      mp[a[i]]++;
    //      if (mp[a[i]] == 2)
    //      {
    //          v.push_back(a[i]);
    //      }
    //  }
    //  cout << v[0];

    // cách 2
    set<int> se;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (check)
        {
            if (se.find(x) != se.end())
            {
                cout << x << " ";
                check = false;
            }
        }
        se.insert(x);
    }
    return 0;
}