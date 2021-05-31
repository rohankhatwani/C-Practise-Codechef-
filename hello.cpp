#include<iostream>
using namespace std;
int main(){
    int wa;
    double bal,total=0;
    cin>>wa;
    cin>>bal;
    if(wa%5==0){
        if(wa<bal){
        total=bal-(wa+0.50);
        printf("%.2f",total);
        }
        else{
            printf("%.2f",bal);

        }
    }
    else{
        printf("%.2f",bal);
    }

    return 0;
}
