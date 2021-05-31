#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],k,sum=0,max=-1;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i+k-1<n;i++)
    {
        sum=0;
        for(int j=i;j<i+k;j++)
        {
            sum+=arr[j];
        }
        if(sum>max)
            max=sum;
    }
    cout<<max;
}
