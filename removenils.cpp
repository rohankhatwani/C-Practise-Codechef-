#include<iostream>
using namespace std;
int main()
{
    int n,i=0;
    int a[10000];
    cin>>n;
    while(n!=0)
    {
        rem[i]=n%2;
        n=n/2;
        i++;
    }
    while(i!=sizeof(a)/sizeof(a[0])){
        cout<<a[i];
    }

}
