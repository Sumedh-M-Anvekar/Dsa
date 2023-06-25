#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
     for(int j=i+1;j<n;j++)
     {
        if(arr[i]>arr[j])
        {
          swap(arr[i],arr[j]);
        }
     }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
        int arr[5]={77,8,2,1,10};
        selection(arr,5);
        return 0;
}