#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    for(int i=1;i<n;i++)//for no of rounds to sort
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int arr[5]={213,92,122,77,88};
    bubblesort(arr,5);
}