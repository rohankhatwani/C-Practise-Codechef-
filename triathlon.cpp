#include<iostream>
using namespace std;
int main()
{
    int n,co[100],po[100],don[100],sum=0,a[100],cosum=0,max1[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>co[i]>>po[i]>>don[i];
        max1[i]=co[i]+po[i]+don[i];
    }
    for(int i=0;i<n;i++)
        {
        if(max1[i]>max1[i+1] && max1[i]>max1[i+2])
        {
            for(int j=i;j<n;j++)
                {
                    cosum=cosum+co[j];
                    if(j==0){
                        sum=co[j]+po[j]+don[j];
                        a[j]=sum;
                    }

                    else{
                        sum=cosum+po[j]+don[j];
                        a[j]=sum;
                    }
                }
    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<"\n";
    }

            }



}
