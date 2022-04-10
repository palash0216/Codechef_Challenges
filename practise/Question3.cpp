#include <iostream>
using namespace std;
int main()
{

    int T, N, X, P;
    cin >> T;
    while (T--)
    {
        cin >> N >> X >> P;
        if (((X * 3) - (N - X) * 1) >= P)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
    return 0;
}