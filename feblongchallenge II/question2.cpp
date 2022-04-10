#include <iostream>
using namespace std;
int main()
{

    int T, X, X_;
    char S[14];
    cin >> T;
    while (T--)
    {
        int C = 0, N = 0, D = 0;
        cin >> X;
        X_ = X;
        cin >> S;
        // cout << S << endl;
        for (int i = 0; i < 14; i++)
        {
            if (S[i] == 'C')
                C++;
            else if (S[i] == 'N')
                N++;
            else
                D++;
        }
        // cout << C << " " << N << " " << D << " " << X_ << endl;
        if (C > N)
            cout << 60 * X_ << endl;
        else if (C == N)
            cout << 55 * X_ << endl;
        else if (N > C)
            cout << 40 * X_ << endl;
    }
    return 0;
}