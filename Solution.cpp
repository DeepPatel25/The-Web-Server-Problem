#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> &a, vector<int> &b)
{
    if (a[0] != b[0])
        return a[0] < b[0];
    return a[1] > b[1];
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int testCases;
    cin >> testCases;

    vector<vector<int>> arr(testCases, vector<int>(3));

    // Initializing the Vector
    for (int i = 0; i < testCases; i++)
    {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    sort(arr.begin(), arr.end(), cmp);

    for (auto &v : arr)
    {
        cout << v[0] << " " << v[1] << " " << v[2] << endl;
    }

    return 0;
}