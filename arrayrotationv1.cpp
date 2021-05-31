#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],d,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>d;
    for(int i=0;i<d;i++)
    {
        temp=arr[0];
        for(int i=0;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
    arr[n-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
