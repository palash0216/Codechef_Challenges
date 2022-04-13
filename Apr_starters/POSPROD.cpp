#include <bits/stdc++.h>
using namespace std;
int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        long long val;
        cin >> val;
        long long pos = 0, neg = 0, N, sol = 0;
        while (val--)
        {
            cin >> N;
            if(N==0)
            {

            }
            else if (N > 0)
                pos++;
            else
                neg++;
        }

        pos--;
        neg--;
        if (pos > 0)
            sol = (pos * (pos + 1) / 2);
        if(neg>0)
            sol += (neg * (neg + 1) / 2);
        cout << sol << endl;
    }
    return 0;
}