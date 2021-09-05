//find maximum product subarray

#include <bits/stdc++.h>
using namespace std;
int maxSubarrayProduct(int arr[], int n)
{
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int mul = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            res = max(res, mul);
            mul *= arr[j];
        }
        res = max(res, mul);
    }
    return res;
}
int main()
{

    int arr[] = {6, -3, -10, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Sub array product is " << maxSubarrayProduct(arr, n);
    return 0;
}