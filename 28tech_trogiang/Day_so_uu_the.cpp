#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    int demChan = 0, demLe = 0;
    while (cin >> n)
    {
        if (n % 2 == 0)
            demChan++;
        else
            demLe++;
        v.push_back(n);
    }
    if (v.size() % 2 == 0 && demChan > demLe)
    {
        cout << "YES" << endl;
    }
    else if (v.size() % 2 != 0 && demLe > demChan)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}