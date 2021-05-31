#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int power(long long x,unsigned int y,int p)
{
    int res=1;
    x=x%p;

    if(x==0)
        return 0;

    while(y>0)
    {
        if(y&1)
            res=(res*x)%p;

        y=y>>1;
        x=(x*x)%p;
    }
    return res;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,answer;
        cin>>n;
        a = (int)(pow(10, 9) + 7);
        answer=power(2,n-1,a);
        cout<<answer<<endl;

    }
}
