#include<iostream>
using namespace std;
int main()
{
    int n,k,count=0,c;
    cin>>n;
    cin>>k;
    while(n!=0)
    {
        cin>>c;
        if(c%k==0)
        {
            count++;
        }
        n=n-1;
    }
    cout<<count;
}
