#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
char s[]="abcccdddcccbbaa";
int main()
{
    int newlen=unique(s,s+strlen(s))-s;
    s[newlen]=0;
    cout<<s<<endl;
}
