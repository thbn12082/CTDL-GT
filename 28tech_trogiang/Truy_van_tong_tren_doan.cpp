#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    int b[n + 1];
    // b[-1] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        b[i] = sum;
    }
    b[0] = 0;
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        cout << b[r] - b[l] << endl;
    }
    return 0;
}