#include <iostream>

using namespace std;
linearsearch(int a[],int n,int key)
{
    for(int i=1;i<=n;i++)
        if(a[i]==key)
        return i;
    return n;
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
        for(int i=0;i<n;i++)
            cin>>a[i];

        cout<<"Enter the key element:";
        cin>>key;
        int result;
       result=linearsearch(a,n,key);
       (result==NULL)?cout<<"Not Present-"<<result"
       :cout<<"Present-"<<result;
       cout<<endl;
    }
    return 0;
}
