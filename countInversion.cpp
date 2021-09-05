//Given an array of integers. Find the Inversion Count in the array.

#include <bits/stdc++.h>
using namespace std;

int inversionCount(int a[], int N)
{
    long long count=0;
    for(int i=0;i<N;i++)
    {
        for(int j=i;j<N-i;j++)
        {
            if(a[i]>a[j] && i<j)
            {
                count++;
            }
        }
    }
    cout<<"Count Inversion is ";
    return count;
}

int main()
{

    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("%ld\n", inversionCount(A, N));

return 0;

}