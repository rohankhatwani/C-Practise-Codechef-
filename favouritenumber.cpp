#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int fav,occ,count=0;
        cin>>fav;
        while(fav!=0){
            occ=fav%10;
            fav=fav/10;
            if(occ==5){
                count++;
            }
        }
        cout<<count;
    }
    return 0;

}
