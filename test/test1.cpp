#include <iostream>
#include <vector>
#include <map>
using namespace std;

int countPairsWithDifference(vector<int> &arr, int k)
{
    map<int, int> freqMap; // Lưu tần suất xuất hiện của từng phần tử
    int count = 0;

    // Đếm tần suất của từng phần tử
    for (int num : arr)
    {
        freqMap[num]++;
    }

    // Duyệt qua từng phần tử trong mảng
    for (auto &[num, freq] : freqMap)
    {
        // Tìm cặp (num, num + k)
        if (freqMap.find(num + k) != freqMap.end())
        {
            count += freq * freqMap[num + k];
        }
        // Tìm cặp (num, num - k)
        if (freqMap.find(num - k) != freqMap.end())
        {
            count += freq * freqMap[num - k];
        }
    }

    // Chia đôi kết quả vì mỗi cặp được đếm 2 lần
    return count / 2;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = countPairsWithDifference(arr, k);
    cout << result << endl;

    return 0;
}
