#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,a,b;
        cin>>x>>a>>b;
        int remainder=(x+1)%b;
        if(a%b==0||a%b==remainder)
            {
                cout<<"YES"<<endl;
            }
        else
        {
            cout<<"NO"<<endl;
        }
        }
}
