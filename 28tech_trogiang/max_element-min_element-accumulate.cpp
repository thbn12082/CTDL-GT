#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    // đây là hàm tính tổng của vector(có thể dùng cho mảng)
    // ở trong accumulate, 0 là giá trị khởi tạo ban đầu, ta có thể khởi tạo 1 giá trị khác để tính tiếp tổng theo yêu cầu bài toán
    return 0;
}