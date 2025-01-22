#include <bits/stdc++.h>
using namespace std;
string res(string x)
{
    bool check = true;
    for (int i = x.length() - 1; i >= 0; i--)
    {
        if (x[i] == '0')
        {
            x[i] = '1';
            check = false;
            break;
        }
        else
        {
            x[i] = '0';
        }
    }
    string tmp = "";
    if (check)
    {
        for (int i = 0; i < x.length(); i++)
        {
            tmp += "0";
        }
    }
    else
    {
        return x;
    }

    return tmp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        cout << res(x) << endl;
    }
    return 0;
}
