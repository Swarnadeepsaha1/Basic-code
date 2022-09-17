#include<bits/stdc++.h>
using namespace std;
//Sum upto n numbers

int main()
{
  int n;
  cout<<"Enter the number upto which you want to calculate sum :"<<endl;
  cin>>n;
  int sum=0;
  for(int i=0;i<=n;i++)
  {
      sum+=i;
      
  }
  cout<<sum;
  
}
