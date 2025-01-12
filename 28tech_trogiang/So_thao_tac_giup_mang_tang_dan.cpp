#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            sum += a[i - 1] - a[i] + 1;
            a[i] = a[i - 1] + 1;
        }
    }
    cout << sum;
    return 0;
}