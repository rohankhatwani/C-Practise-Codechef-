#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    if(n<4){
    if(n==1)
    {
        cout<<"1"<<endl;
        cout<<"1 1"<<endl;
    }
    else if(n==2)
    {
        cout<<"1"<<endl;
        cout<<"2 1 2"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
        cout<<"3 1 2 3"<<endl;
    }
    }
    else
    {
        int day=n/2;
        if(n%2==0)
        {
            cout<<day<<endl;
            for(int i=1;i<n;i+=2)
            {
                cout<<"2 "<<i<<" "<<i+1<<endl;
            }
        }
        else
        {
            cout<<day<<endl;
            cout<<"3 "<<"1 2 3"<<endl;
            for(int i=4;i<n;i+=2)
                cout<<"2 "<<i<<" "<<i+1<<endl;
        }
    }
}
}
