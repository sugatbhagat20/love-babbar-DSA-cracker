//Given three arrays sorted in increasing order. Find the elements that are common in all three arrays

#include <bits/stdc++.h>
using namespace std;

int commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    int c=0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; i < n3; k++)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    c=A[i];
                }
            }
            
        }
    }
    return c;
      
}

int main()
{
    int n1 = 6;
    int A[n1] = {1, 5, 10, 20, 40, 80};
    int n2 = 5;
    int B[n2] = {6, 7, 20, 80, 100};
    int n3 = 8;
    int C[n3] = {3, 4, 15, 20, 30, 70, 80, 120};
    commonElements(A, B, C, n1, n2, n3);
    return 0;
}