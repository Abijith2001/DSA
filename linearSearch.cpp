#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

void inputArray(int arr[], int size)
{
    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
}

int main()
{
    int arr[100],key,size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;
    inputArray(arr,size);
    cout<<"Enter the element to be searched: "<<endl;
    cin>>key;
    bool found = search(arr,size,key);
    if(found)
    {
        cout<<"Key is present"<<endl;
    }
    else
    {
        cout<<"Key is absent"<<endl;
    }
    
    return 0;
}