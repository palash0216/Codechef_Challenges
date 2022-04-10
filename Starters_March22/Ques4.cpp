#include <iostream>
using namespace std;
int main()
{

    int T, N, M;
    cin >> T;
    while (T--)
    {
        cin >> N >> M;
        if (N < M)
            cout << M - N << endl;
        else
            cout << ((N * 2) - M) << endl;
    }
    return 0;
}