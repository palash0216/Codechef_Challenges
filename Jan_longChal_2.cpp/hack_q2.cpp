#include <iostream>
using namespace std;
// 120 121 231
int main()
{
    int t, num, num_cpy, temp, flag = 0;
    cin >> t;
    while (t--)
    {
        cin >> num;
        temp = num;
        while (num != 0)
        {
            num_cpy = (num % 100);
            flag=0;
            // cout << num_cpy << endl;
            if (num_cpy == 21)
            {
                flag = 1;
                break;
            }
            else
                num /= 10;
        }
        // cout << flag << endl;
        if (flag == 1 || (temp % 21) == 0)
            cout << "The streak is broken !" << endl;
        else
            cout << "The streak lives still in our heart !" << endl;
    }
}
// 43
// 69521
// 7484
// 78175
// 86424
// 18929
// 5093
// 32256
// 85231
// 79632
// 41092
// 23030
// 63277
// 76607
// 30523
// 25835
// 9218
// 35751
// 81305
// 31418
// 89505
// 32057
// 57009
// 24955
// 82525
// 78177
// 56949
// 81996
// 49202
// 69475
// 42669
// 37698
// 48269
// 92648
// 70010
// 72777
// 45342
// 44735
// 68903
// 16283
// 25350
// 96967
// 80658
// 9803