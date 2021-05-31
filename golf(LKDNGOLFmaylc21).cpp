#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,x,k,count1=0;
        cin>>n>>x>>k;
        register long a[n];
        for(int i=0;i<n;i=i+k)
        {
            a[i]=i;
        }
        for(int i=0;i<n;i++)
        {
            if(x==a[i])
            {
                count1=count1+1;
                break;
            }
        }
        if(count1>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
