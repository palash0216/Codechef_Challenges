#include <iostream>
using namespace std;
int main()
{

    int T, N, count = 0,val;
    cin >> T;
    while (T--)
    {
        cin >> N;
        long int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        count = 0;
        for (int i = 1; i <= N; i++)
        {
            val=i+count+1;
            if (A[i] == val)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}