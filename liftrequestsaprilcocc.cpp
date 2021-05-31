#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long dist=0;
        int cf=0;
        for(int i=0;i<q;i++)
        {
            int f,d;
            cin>>f>>d;

            dist=dist+abs(cf-f)+abs(f-d);
            cf=d;
        }
        cout<<dist<<"\n";
    }
    return 0;
}
