//Given an array of size n and a number k, fin all elements that appear more than " n/k " times.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countOccurence(int arr[], int n, int k)
{
    int count[n] = {0};
    int occur = 0;
    int x = n / k;
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (count[i] > x)
        {
            occur++;
        }
    }
    return occur;
}

int main()
{
    int n = 8;
    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int k = 4;
    cout <<countOccurence(arr, n, k) << endl;

    return 0;
}
