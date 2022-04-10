#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void Solve(long long A,long long B)
{
    if(A==1||B==1)
        cout<<-1<<endl;
    else if(__gcd(A,B)==1)
        cout<<1<<endl;
    else
        cout<<0<<endl;
    
}

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    long long A,B;
	    cin>>A>>B;
	    Solve(A,B);
	}
	return 0;
}
