#include <iostream>
using namespace std;
int main()
{

    int T, n, m, k;
    cin >> T;
    while (T--)
    {
        cin >> n >> m >> k;
        int res = m - k;
        if (res >= n)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}