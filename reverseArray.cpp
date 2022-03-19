#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0, end = size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
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

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[100];
    int size;
    cout<<"Enter the size of the Array: "<<endl;
    cin>>size;
    inputArray(arr,size);
    reverse(arr,size);
    printArray(arr,size);
    return 0;
}