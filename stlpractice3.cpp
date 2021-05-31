#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10]={1,3,5,5,5,7,9,11,11,13};
    cout<<distance(a,lower_bound(a,a+10,5))<<endl;
    cout<<*(lower_bound(a,a+10,5))<<endl;
    cout<<distance(a,lower_bound(a,a+10,8))<<endl;
    cout<<*(lower_bound(a,a+10,8))<<endl;
    int b[10]={5,4,3,2,1,6,10,9,8,7};
    cout<<lower_bound(b,b+10,20)-b<<endl;

    cout<<"Upper bound:"<<distance(a,upper_bound(a,a+10,5))<<endl;
    cout<<*(upper_bound(a,a+10,5))<<endl;
    cout<<distance(a,upper_bound(a,a+10,8))<<endl;
    cout<<*(upper_bound(a,a+10,8));
}
