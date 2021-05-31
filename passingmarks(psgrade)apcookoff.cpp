#include<iostream>
using namespace std;
int main()
{
    int t,amin,bmin,cmin,tmin,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        if(a>=amin && b>=bmin && c>=cmin){
        if((a+b+c)>=tmin)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
