//Write a program to cyclically rotate an array by one.
#include <iostream>
using namespace std;
void rotate(int arr[], int n)
{
    int x = arr[n - 1]; //x is the last element of the array
    int i;
    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];
    arr[0] = x;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) /
            sizeof(arr[0]);

    cout << "Given array is ";
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    rotate(arr, n);

    cout << "Rotated array is ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
