#include <iostream>
using namespace std;
int main()
{

    int T,A,B;
    cin >> T;
    while (T--)
    {
        cin>>A>>B;
        if(A==1 && B==1)
        cout<<1<<endl;
        else
        cout<<(A*B)/2<<endl;
    }
    return 0;
}