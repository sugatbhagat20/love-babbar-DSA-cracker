//Find the maximum and minimum element in an array

#include <iostream>
using namespace std;

int maxFun(int x[])
{
    int i;
    int maxi = x[0];
    for (i = 0; i < 10; i++)
    {
        if (x[i] >= maxi)
        {
            maxi = x[i];
        }
    }
    printf("%d ", maxi);

    return -1;
}

int minFun(int x[])
{
    int i;
    int mini = x[0];
    for (i = 0; i < 10; i++)
    {
        if (x[i] <= mini)
        {
            mini = x[i];
        }
    }
    printf("%d", mini);

    return -1;
}
int main()
{
    int a[10] = {21, 7, 3, 9, 500, 11, 8, 10, 6, 41};
    int max, min;
    max = maxFun(a);
    min = minFun(a);
    return 0;
}