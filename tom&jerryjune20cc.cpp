#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        long long int ts;
        cin>>ts;
        while(ts%2!=1)
        {
            ts=ts/2;
        }
        cout<<(ts-1)/2<<endl;

    }
    return 0;
}
