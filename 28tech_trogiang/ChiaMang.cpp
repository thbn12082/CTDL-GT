#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    int sum2 = 0;
    for (int i = 0; i < min(k, n - k); i++)
    {
        sum2 += a[i];
    }
    cout << sum - sum2 * 2;
    return 0;
}