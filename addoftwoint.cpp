#include<iostream>
using namespace std;

int addition(int a, int b)
{
    return a + b;
}

int main()
{
    int a,b,sum;
    cin>>a>>b;
    sum = addition(a,b);
    cout<<sum;
}
