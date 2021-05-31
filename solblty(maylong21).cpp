#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,a,b,res=0;
        cin>>x>>a>>b;
        res=(a+(100-x)*b)*10;
        cout<<res<<endl;

    }
}
