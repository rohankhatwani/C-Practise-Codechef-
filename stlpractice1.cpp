#include<iostream>
#include<algorithm>
using namespace std;
int a[10]={4,7,1,8,2,5,4,9,6,3};
int main()
{
    sort(a,a+10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i];
    }
    return 0;
}

