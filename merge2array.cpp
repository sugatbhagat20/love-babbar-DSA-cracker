//Merge 2 sorted arrays without using Extra space.

#include <bits/stdc++.h>
using namespace std;

void mergeArray(int a[], int b[], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        if (a[i] > b[0])
        {
            swap(a[i], b[0]);
        }
        sort(b, b + y);
    }
    for (int i = 0; i < x; i++)
    {
        cout << a[i] << ' ';
    }
    for (int i = 0; i < y; i++)
    {
        cout << b[i] << ' ';
    }
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {0, 2, 6, 8, 9};
    int n = 4, m = 5;

    mergeArray(arr1, arr2, n, m);
}