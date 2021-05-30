//Move all the negative elements to one side of the array 
#include<iostream>
using namespace std;

void seperateNegative(int a[],int size)
{
    int temp=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    
}

int main()
{
    int arr[]={3,-5,2,-7,-4,4,0,-1,-100};
    int size=sizeof(arr)/sizeof(arr[0]);
    seperateNegative(arr,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}