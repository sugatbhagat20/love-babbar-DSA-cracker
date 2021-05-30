//Reverse the array
#include<iostream>
using namespace std;

void reverseArr(int a[],int size)
{
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,size);
    return 0;
}