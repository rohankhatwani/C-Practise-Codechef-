#include<iostream>
using namespace std;
int main()
{
    int t,w1,w2,w3,s,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>s>>w1>>w2>>w3;
        sum=w1+w2+w3;
        if(sum<=s)
        {
            cout<<"1"<<endl;
        }
        else
        {
            int sum1=w1+w2;
            int sum2=w2+w3;
            if(sum1<=s || sum2<=s)
            {
                cout<<"2"<<endl;
            }
            else{
                cout<<"3"<<endl;
            }
        }
    }


}
