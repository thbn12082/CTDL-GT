#include <bits/stdc++.h>
using namespace std;
// void nhanDoi(int a[])
// {
//     for (int i = 0; i < 5; i++)
//     {
//         a[i] *= 2;
//     }
// }

// void nhanDoi(vector<int> &a)
// {
//     // khi ta truyền mỗi vector<int> a vào thôi thì sẽ là ta làm việc với bản sao của vector a => cần phải viết là vector<int> &a để làm việc trực tiếp đối với vector a
//     for (int i = 0; i < a.size(); i++)
//     {
//         a[i] *= 2;
//     }
// }
int main()
{
    // vector<int> v(5);
    // for (int i = 0; i < 5; i++)
    // {
    //     v.push_back(i);
    // }
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // cout << v.size();
    // sẽ sinh ra 10 phần tử, 5 là các phần tử ban đầu nhận giá trị 0, 5 phần tử sau nhận giá trị từ 0 đến 4
    // push_back: thêm phần tử vào đuôi chứ không thay đổi các giá trị của vector

    // int a[5] = {1, 2, 3, 4, 5};
    // nhanDoi(a);
    // for (int x : a)
    // {
    //     cout << x << " ";
    // }

    // vector<int> a = {1, 2, 3, 4, 5};
    // nhanDoi(a);
    // for (int x : a)
    // {
    //     cout << x << " ";
    // }
    // vector<int> v = {1, 2, 3};
    // vector<int> a = {4, 5, 6, 7, 8, 9, 10};
    // v = a;
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // map<int, int> mp;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     mp[x]++;
    // }
    // for (auto x : mp)
    // {
    //     cout << x.first << " " << x.second << endl;
    // }
    // cout << endl;
    // for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }
    // cout << mp.count(1);
    // hàm count trả về 0 nếu không tồn tại, 1 nếu tồn tại, độ phức tạp là O(logN)
    // map<int, int>::iterator it = mp.find(1);
    // if (it != mp.end())
    // {
    //     mp.erase(it);
    //     cout << "Exits and already delete";
    // }
    // else
    // {
    //     cout << "Not Found";
    // }
    // nếu xóa phần tử không tồn tại => chương trình sẽ bị lỗi luôn

    // set<int> se;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     se.insert(x);
    // }
    // for (set<int>::iterator it = se.begin(); it != se.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // for (set<int>::reverse_iterator it = se.rbegin(); it != se.rend(); it++)
    // {
    //     cout << *it << " ";
    // }

    // set<int> se;
    // for (int i = 1; i <= 10; i++)
    // {
    //     se.insert(i);
    // }
    // set<int>::iterator it_min = se.begin();
    // set<int>::reverse_iterator it_max = se.rbegin();

    // cout << *it_min << "            " << *it_max << endl;
    // cout << endl;
    // cout << endl;
    // it_min++;
    // it_max++;
    // cout << *it_min << "            " << *it_max << endl;

    // int n;
    // cin >> n;
    // int a[n];
    // for (int &x : a)
    // {
    //     cin >> x;
    // }
    // for (int x : a)
    // {
    //     cout << x;
    // }

    return 0;
}