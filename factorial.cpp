#include<iostream>
using namespace std;

int factorial(int);

int main()
{
    int n,fact;
    cin>>n;
    fact = factorial(n);
    cout<<fact;
}

int factorial(int n)
{
    int fact = 1;
    for(int i=2;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
