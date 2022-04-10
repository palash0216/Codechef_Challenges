#include<iostream>
using namespace std;
int main()
{
    int T,A,B,X,Y;
    cin>>T;
    while(T--)
    {
        int AB=0,XY=0;
        cin>>A>>B>>X>>Y;
        AB=A*B;
        XY=X*Y;
        if(XY>=AB)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    
    return 0;
}