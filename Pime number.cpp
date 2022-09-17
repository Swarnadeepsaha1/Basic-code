#include<bits/stdc++.h>
using namespace std;

//Prime or not

bool isPRIME(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
        return 1;
    }
}

int main()
{
   
    int n;
    cout<<"ENTER THE NUMBER TO CHECK"<<endl;
    cin>>n;
    if(isPRIME(n))
    {
        cout<<"The number is prime";
    }
    else
    {
        cout<<"The number is not a prime";
    }
     return 0;
}
