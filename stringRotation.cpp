#include<bits/stdc++.h>
using namespace std;

int isRotation(string a,string b)
{
    if (a.length() != b.length())
    {
        return 0;
    }

    string temp=a+a;

    if(temp.find(b)!=(-1))
    {
        printf("Strings are rotations of each other");
    }    
    else
    {
        printf("Strings are not rotations of each other");
    }
    return 0;
}

int main()
{
    string a,b;
    cin>>a>>b;
    isRotation(a,b);
    return 0;
}