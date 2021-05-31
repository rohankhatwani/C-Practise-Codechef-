#include<iostream>
using namespace std;
float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
int main()
{
    int t;
    float k1,k2,k3,v,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>k1>>k2>>k3>>v;
        sum=100/(k1*k2*k3*v);
        float fin=round(sum);
        float record=9.58;

        if(fin<record)
        {
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }


}
