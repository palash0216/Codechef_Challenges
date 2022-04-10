#include <iostream>
using namespace std;
int Selection_sort(int arr[], int size)
{
    int i, j, min, temp;
    // cout << endl
    //      << "Array after sorted with Selection sort";
    for (i = 0; i < size - 1; i++)
    {
        // cout << endl;
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        // for (int z = 0; z < size; z++)
        // {
        //     cout << arr[z] << " ";
        // }
    }
}
int main()
{
    int T, X, N;
    cin >> T;
    while (T--)
    {
        cin >> N >> X;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Selection_sort(A, N);
        int sum = 0, temp = 0, i;
        for (i = 0; i < N; i++)
        {
            sum = sum + A[i];
            if (sum >= X)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 1)
            cout << i + 1 << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}