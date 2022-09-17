#include<bits/stdc++.h>
using namespace std;

// EVEN OR ODD PROBLEM
bool iseven(int n)
{

        if(n%2==0)
        {
            return 1;
        }
    return 0;
}
int main()
{
    int n;
    cout<<"ENTER THE NUMBER TO CHECK"<<endl;
    cin>>n;
    if(iseven(n))
    {
        cout<<"The number is even";
    }
    else
    {
        cout<<"The number is odd";
    }
     return 0;
}
