#include <iostream>
using namespace std;
int main()
{
    int T, sum;
    cin >> T;
    while (T--)
    {
        cin >> sum;
        int X = 1, Y;
        Y = -X - sum;
        cout << Y << endl;
    }
    return 0;
}
