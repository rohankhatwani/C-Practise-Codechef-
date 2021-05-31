#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        long long int a[n],b[n];
        long long int ten=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
            //int ten=0;
            for(int i=0;i<n;i++)
            {
                if(i==0)
                {
                   ten=ten+b[i];
                   //cout<<ten<<endl;
                }
                else
                {
                    ten=ten + b[i] - r;
                    //cout<<ten<<endl;
                }

            }
            cout<<ten<<endl;

    }
}
