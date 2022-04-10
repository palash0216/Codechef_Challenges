// #include<iostream>
// using namespace std;
// int main()
// {

//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int T, DSA_D, TOC_D, DM_D, DSA_S, TOC_S, DM_S, Total_D, Total_S;
    cin >> T;
    while (T--)
    {
        cin >> DSA_D >> TOC_D >> DM_D >> DSA_S >> TOC_S >> DM_S;
        Total_D = DSA_D + TOC_D + DM_D;
        Total_S = DSA_S + TOC_S + DM_S;
        if (Total_D == Total_S)
        {
            if (DSA_D > DSA_S)
                cout << "DRAGON" << endl;
            else if (DSA_D == DSA_S)
            {
                if (TOC_D > TOC_S)
                    cout << "DRAGON" << endl;
                else if (TOC_S > TOC_D)
                    cout << "SLOTH" << endl;
                else
                    cout << "TIE" << endl;
            }
            else if (DSA_S > DSA_D)
                cout << "SLOTH" << endl;
        }
        else if (Total_D > Total_S)
            cout << "DRAGON" << endl;
        else if (Total_S > Total_D)
            cout << "SLOTH" << endl;
    }

    return 0;
}