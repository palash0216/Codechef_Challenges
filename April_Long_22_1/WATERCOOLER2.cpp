#include <bits/stdc++.h>
using namespace std;
int main()
{

    long int T,X,Y;
    cin >> T;
    while (T--)
    {
        cin>>X>>Y;
        
        int count=0;
        if(Y>X)
        cout<<(Y/X)<<endl;
        else
        cout<<"0"<<endl;
    }
    return 0;
}