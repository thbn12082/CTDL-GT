#include <bits/stdc++.h>
using namespace std;
const int con = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (a[i] % con * i % con) % con;
        sum %= con;
    }
    cout << sum;
    return 0;
}