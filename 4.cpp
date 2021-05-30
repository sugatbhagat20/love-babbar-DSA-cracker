//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<iostream>
using namespace std;

int sort012(int x[],int size)
{
    int i,j,temp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",x[i]);
    }
    return 0;
}

int main()
{
    int arr[]={1,2,0,0,2,1,1,0,2,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,size);
    return 0;
}