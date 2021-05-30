//Find the "Kth" max and min element of an array

#include <iostream>
using namespace std;

int kMinMax(int x[], int k)
{
    int i, j;
    int temp = 0;
    int kmin, kmax;

    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    kmin = x[k - 1];
    kmax = x[10 - k]; // where 10 is the size of your array
    printf("kth max is %d and kth min is %d", kmax, kmin);

    return 0;
}

int main()
{
    int a[10] = {6, 0, 5, 9, 2, 7, 4, 8, 3, 1};
    kMinMax(a, 3); //where 3 is the value of k
    return 0;
}