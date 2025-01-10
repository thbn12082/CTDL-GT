#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
    return abs(a) < abs(b);
}
int main()
{
    // sort(a, a + n, greater<int>());
    int a[11] = {-1, -2, -3, -4, -5, -6, 1, 2, 3, 4, 5};
    // sort(a, a + 11, cmp);
    stable_sort(a, a + 11, cmp);
    for (int x : a)
    {
        cout << x << " ";
    }
    return 0;
}