#include <bits/stdc++.h>
using namespace std;
int solve(int n, int m, int k)
{
    if (m * k >= n)
        return 1;
    else
        return 0;
}
int main()
{

    int T, n, m, k;
    cin >> T;
    while (T--)
    {
        cin >> n >> m >> k;
        if (solve(n, m, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}