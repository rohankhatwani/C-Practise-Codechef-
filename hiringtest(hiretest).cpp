#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,countf=0,countu=0,countp=0;
        cin>>n>>m;
        cin>>x>>y;
        char arr[m],arr1[n];
        while(n--)
        {
            for(int i=0;i<m;i++)
            {
                cin>>arr[i];
            }
            for(int i=0;i<m;i++)
            {
                if(arr[i]=='F')
                {
                    countf++;
                }
                else if(arr[i]=='U')
                {
                    countu++;
                }
                else
                {
                    countp++;
                }
            }
                if(countf>x || countf==y || countp>y)
                {
                    arr1[i]=1;
                }
                else
                {
                    arr1[i]=0;
                }

        }
            for(int i=0;i<n;i++)
            {
                cout<<arr1[i];
            }
    }
}

