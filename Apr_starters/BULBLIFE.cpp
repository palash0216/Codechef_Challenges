#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T, N, X;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        int arr[N], sum = 0;
        for (int i = 0; i < N - 1; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int y = (X * N) - sum;
        if (y < 0)
            cout << 0 << endl;
        else
            cout << y << endl;
    }
    return 0;
}
// Y=(X*N)-sum--> (4*3)-6