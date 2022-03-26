#include <iostream>

using namespace std;
binarysearch(int a[],int l,int r,int key)
{
   if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (a[mid] == key)
            return mid;


        if (a[mid] > key)
            return binarysearch(a, l, mid - 1, key);


        return binarysearch(a, mid + 1, r, key);
    }
    return -1;
}


int main()
{
    int test;
    int key;
    cout<<"Enter the no. of test cases:";
    cin>>test;
    while(test--)
     {
        int n;
        cout<<"Enter the size of array:";
        cin>>n;
        int a[n];
        cout<<"Enter the elements in array:";
        for(int i=1;i<=n;i++)
            cin>>a[i];

        cout<<"Enter the key element:";
        cin>>key;
        int result;
       result=binarysearch(a,1,n,key);
       (result==-1)?cout<<"Not Present-"<<n:cout<<"Present-"<<result;
       cout<<endl;
    }
    return 0;
}
