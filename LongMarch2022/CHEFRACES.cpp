#include <iostream>
using namespace std;
int main()
{

    int T, X, Y, A, B;
    cin >> T;
    while (T--)
    {
        int count = 2;
        cin >> X >> Y >> A >> B;
        if (X == A || X == B)
            count -= 1;
        if (Y == A || Y == B)
            count -= 1;
        cout << count << endl;
    }
    return 0;
}