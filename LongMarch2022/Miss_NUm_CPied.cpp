#include <bits/stdc++.h>
using namespace std;
#define LN_int long long int
int main()
{
    LN_int t;
    cin >> t;
    while (t--)
    {
        LN_int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        sort(arr, arr + 4);
        LN_int A1 = (arr[2] + arr[0]) / 2;
        LN_int B1 = arr[2] - A1;
        LN_int A2 = (arr[2] + arr[1]) / 2;
        LN_int B2 = arr[2] - A2;
        LN_int A3 = (arr[3] + arr[0]) / 2;
        LN_int B3 = arr[3] - A3;
        LN_int A4 = (arr[3] + arr[1]) / 2;
        LN_int B4 = arr[3] - A4;
        if ((A1 % 1 == 0) && (A1 != 0) && (B1 % 1 == 0) && (B1 != 0))
            if ((A1 / B1 == arr[1]) && (A1 * B1 == arr[3]) && (A1 >= 1) && (B1 >= 1) && (A1 <= 10000) && (B1 <= 10000))
            {
                cout << A1 << " " << B1 << endl;
                continue;
            }
        if ((A2 % 1 == 0) && (A2 != 0) && (B2 % 1 == 0) && (B2 != 0))
            if ((A2 / B2 == arr[0]) && (A2 * B2 == arr[3]) && (A2 >= 1) && (B2 >= 1) && (A2 <= 10000) && (B2 <= 10000))
            {
                cout << A2 << " " << B2 << endl;
                continue;
            }
        if ((A3 % 1 == 0) && (A3 != 0) && (B3 % 1 == 0) && (B3 != 0))
            if ((A3 / B3 == arr[1]) && (A3 * B3 == arr[2]) && (A3 >= 1) && (B3 >= 1) && (A3 <= 10000) && (B3 <= 10000))
            {
                cout << A3 << " " << B3 << endl;
                continue;
            }
        if ((A4 % 1 == 0) && (A4 != 0) && (B4 % 1 == 0) && (B4 != 0))
            if ((A4 / B4 == arr[0]) && (A4 * B4 == arr[2]) && (A4 >= 1) && (B4 >= 1) && (A4 <= 10000) && (B4 <= 10000))
            {
                cout << A4 << " " << B4 << endl;
                continue;
            }
        cout << "-1 -1" << endl;
    }
    return 0;
}