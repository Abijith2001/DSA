//program to swap all zeros to left and one's to right
#include<iostream>
using namespace std;

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

void swapzeroone(int arr[], int size){
    int i=0,j=size-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

int main(){
    int arr[100];
    cout<<"Enter the size of the array: "<<endl;
    int size;
    cin>>size;
    inputArray(arr,size);
    swapzeroone(arr,size);
    printArray(arr,size);
}