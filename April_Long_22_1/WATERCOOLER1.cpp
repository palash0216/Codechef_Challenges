#include <bits/stdc++.h>
using namespace std;
int main()
{

    long int T,X,M,Y;
    cin >> T;
    while (T--)
    {
        long int total=0;
        cin>>X>>Y>>M;
        //X-Rent per month 
        //Y-price of cooler
        //M-moths for summer season
        total=Y-(X*M);
        total>0?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}