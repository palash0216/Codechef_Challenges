#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T, n, x, y;

    cin >> T;
    while (T--)
    {
        cin >> n >> x >> y;
        int count10 = 0, count01 = 0;
        char arr[n];
        cin >> arr;
        if (x > y)
            sort(arr, arr + n, greater<int>());
        else
            sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == '0' && arr[i + 1] == '1')
                count01++;
            if (arr[i] == '1' && arr[i + 1] == '0')
                count10++;
        }
        // cout << "x=" << x << " "<< "y=" << y << endl;
        // cout << "count01=" << count01 << " "<< "count10=" << count10 << endl;
        cout << (x * count01) + (y * count10) << endl;
    }
    return 0;
}