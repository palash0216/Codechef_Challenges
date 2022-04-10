#include <bits/stdc++.h>
using namespace std;
void even(long int A, long int B)
{

    if (A + 2 <= B)
        cout << A << " " << A + 2 << endl;
    else
        cout << -1 << endl;
}
void odd(long int A, long int B)
{

    if (A + 3 <= B)
    {
        if (A % 3 == 0)
            cout << A << " " << A + 3 << endl;
        else
            cout << A + 1 << " " << A + 3 << endl;
    }
    else
        cout << -1 << endl;
}
int main()
{
    int T;
    cin >> T;
    long int A, B;
    while (T--)
    {
        cin >> A >> B;
        if (A % 2 == 0)
            even(A, B);
        else
            odd(A, B);
    }
    return 0;
}