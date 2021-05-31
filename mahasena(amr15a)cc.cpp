#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,codd=0,ceven=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
        {
            ceven=ceven+1;
        }
        else
        {
            codd=codd+1;
        }
    }
    if(ceven>codd)
    {
        cout<<"READY FOR BATTLE";
    }
    else
    {
        cout<<"NOT READY";
    }
}
