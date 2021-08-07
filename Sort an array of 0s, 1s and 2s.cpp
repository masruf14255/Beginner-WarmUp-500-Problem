
/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[], int arr_size)
{
    int lo=0;
    int hi=arr_size-1;
    int mid=0;

    while(mid<=hi)
    {
        switch(arr[m])
        {
            case 0:
            swap(arr[lo++],a[mid++]);
            break;

            case 1:
            mid++;
            break;

            case 2:
            swap(arr[mid],arr[hi-1]);
            break;
        }
    }
}


void printArray(int arr[], int arr_size)
{
    for(int i=0; i<arr_size; i++)
        cout<<arr[i]<<" ";
}
int main()
{

    int arr[]={0,1,1,0,1,2,2,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort012(arr,n);
    cout<<"Array after segregation ";
    printArray(arr,n);
    return 0;
}
