#include<bits/stdc++.h>
using namespace std;

//PALIMDROME NUMBER OR NOT

int reverse(int n)
{
    int r=0;
    while(n!=0)
    {
        int digit=n%10;
        r=r*10+digit;
        n=n/10;
    }
    return r;
}
int main()
{
    int n;
    cout<<"Enter the number you want to check"<<endl;
    cin>>n;
    int num=n;
    int r=reverse(n);
    if(r==num)
    {
        cout<<"The number is palindrome"<<endl;
        
    }
    else
    {
        cout<<"The number is not palindrome"<<endl;
    }
    return 0;
    
}