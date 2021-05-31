#include<iostream>
using namespace std;

int sum(int [],int);
int main()
{
    int marks[100],n;
    cout<<marks;
    cin>>n;
    sum(marks,n);

}

int sum(int arr[],int n)
{
    cout<<arr;
    int total=0;
    for(int i=0;i<n;i++)
    {
        total = total+arr[i];
    }
    cout<<total;
}
