//Maximum profit by buying and selling a share atmost twice(infinite transcation)
#include<bits/stdc++.h>
using namespace std;

int maxProfit(int price[],int n)
{
    int profit=0;
    
    for (int i = 1; i < n; i++)
    {
        int sub = price[i] - price[i - 1];
        if (sub > 0)
            profit += sub;
    }
 
    cout << "Maximum Profit = " << profit;
    return 0;
    
} 

int main()
{
    int a[]={100, 30, 15, 10, 8, 25, 80};
    int n=sizeof(a)/sizeof(a[0]);
    maxProfit(a,n);
    return 0;
}