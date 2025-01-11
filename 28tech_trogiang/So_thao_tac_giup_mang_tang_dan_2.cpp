#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            while (a[i] <= a[i - 1])
            {
                a[i] += d;
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}