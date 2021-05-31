#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        printf("YES");
    }
    else if(a==b && b!=c && a!=c)
    {
        printf("YES");
    }
    else if(a==c && b!=c && a!=b)
    {
        printf("YES");
    }
    else if(b==c && a!=c && a!=b)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
