#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,xr,yr,d,xdiv,ydiv,mini;
        cin>>x>>y>>xr>>yr>>d;
        xdiv=x/xr;
        ydiv=y/yr;
        mini=min(xdiv,ydiv);
        if(mini<d)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
