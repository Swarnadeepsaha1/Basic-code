#include<bits/stdc++.h>
using namespace std;

// BINARY SEARCH FOR ODD NUMBER

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2; //for optimization check love babbar notes
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid]) //moving to right parh of the array
        {
            start=mid+1;
        }
        else            //moving to left part of the array
        {
            end=mid-1;
        }
        mid=start+(end-start)/2; //check your notes
        
    }
    return -1;
}
int main()
{

    int even[]={5,6,7,8,9,10};
    int odd[]={5,6,8,9,15};
    int index=binarysearch(odd,5,9);
    cout<<"Index of 9 is "<<index<<endl;

    return 0;

}
