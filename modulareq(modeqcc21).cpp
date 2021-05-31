#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,count=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            int j;
            j=i;
            if((m%j)%(j+1)==(m%(j+1))%j)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
