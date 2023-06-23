#include<iostream>
using namespace std;

int main()
{
    int a[] = {0}, n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    int rra[] = {0};

    cout << "Reverse array " << endl;

    for(int i = n-1; i >= 0; i--)
    {
        rra[i] = arr[n-1-i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << rra[i] << " ";
    }
    
    return 0;
}
