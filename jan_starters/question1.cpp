#include <iostream>
using namespace std;
int main()
{
    int t, X, Y, Z, XY, XZ;
    cin >> t;
    while (t--)
    {
        cin >> X >> Y >> Z;
        XY = X * Y;
        XZ = X * Z;
        cout << XZ - XY << endl;
        cout<<9/3;
    }
    return 0;
}