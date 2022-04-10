#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        long long int N, B = 1;
        cin >> N;
        if (N % 4 == 3 || N % 4 == 2)
            cout << 3 << endl;
        else if (N % 4 == 0)
            cout << N + 3 << endl;
        else if (N % 4 == 1)
            cout << N << endl;
    }
    return 0;
}