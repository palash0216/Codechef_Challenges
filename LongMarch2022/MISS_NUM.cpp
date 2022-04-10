#include <bits/stdc++.h>
using namespace std;
int main()
{

    long int T, arr[4], i; // arr-sub-div-sum-mul
    cin >> T;
    while (T--)
    {
        int flag = 0;
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        sort(arr, arr + 4);
        // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;
        for (i = 1; i < arr[3] / i; i++)
        {

            // if (i == arr[0] + (i + 1) || arr[1] * (i + 1) == i || arr[2] - (i + 1) == i || arr[3] / (i + 1) == i)
            // {
            if (arr[0] == i - (i + 1) && arr[1] == i / (i + 1) && arr[2] == i + (i + 1) && arr[3] == i * (i + 1))
            {
                flag = 1;
                break;
            }
            // }
        }
        if (flag == 1)
            cout << i << " " << i + 1 << endl;
        else
            cout << "-1 -1" << endl;
    }
    return 0;
}