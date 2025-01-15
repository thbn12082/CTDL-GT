#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a)
    {
        cin >> x;
    }
    int min_res = 1e9;
    int start = 0;
    int sum = 0;
    for (int end = 0; end < n; end++)
    {
        sum += a[end];
        while (sum >= k)
        {
            if (sum == k)
            {
                min_res = min(min_res, end - start + 1);
            }
            sum -= a[start];
            start++;
        }
    }
    if (min_res == 1e9)
    {
        cout << -1;
    }
    else
    {
        cout << min_res;
    }
    return 0;
}