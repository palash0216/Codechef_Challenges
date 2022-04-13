#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T, a, b, c, d;
    cin >> T;
    while (T--)
    {
        cin >> a >> b >> c >> d;
        if (a <= c && b <= d)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}