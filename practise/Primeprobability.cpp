#include <bits/stdc++.h>
using namespace std;
int Prime(int n)
{
    int i, count = 0, j;
    for (i = 3; i < n - 1; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
    }
    return count;
}
void reduceFraction(int x, int y)
{
    int d;
    d = __gcd(x, y);

    x = x / d;
    y = y / d;

    cout << x << "/" << y << endl;
}
int main()
{
    int num;
    cin >> num; // 3,5,7,11,13
    int x = 16;
    int y = 10;
    if(x==0||y==0)
    cout<<"0/1";
    else
    reduceFraction(Prime(num), num - 1);

    return 0;
}