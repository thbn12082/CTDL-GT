#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int soThuNhat = 0;
    int soThuHai = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            soThuNhat += a[i];
        }
        else
        {
            soThuHai += a[i];
        }
    }
    cout << soThuNhat + soThuHai;
    return 0;
}