#include <iostream>
using namespace std;
int Selection_sort(int arr[], int size)
{
    int i, j, min, temp;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int N, K, sum = 0, count = 0;
    cin >> N >> K;
    int Arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }
    Selection_sort(Arr, N);
    // for (int z = 0; z < N; z++)
    // {
    //     cout << Arr[z] << " ";
    // }
    // cout << endl;
    for (int j = 0; j < N; j++)
    {
        sum = sum + Arr[j];
        cout << sum << " ";
        if (sum > K)
            break;
        else
            count++;
    }
    // cout << endl;
    cout << count;
}