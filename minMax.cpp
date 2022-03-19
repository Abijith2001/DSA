//Program finds min and max values in an array
#include<iostream>
using namespace std;

int getMin(int arr[],int size){
    int mini = INT_MAX; //assigns max value of integer to the mini
    for(int i=0;i<size;i++)
    {
        mini = min(mini,arr[i]);
    }
    return mini;
}

int getMax(int arr[],int size){
    int maxi = INT_MIN; //assigns min value of integer to the maxi
    for(int i=0;i<size;i++)
    {
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}

void inputArray(int arr[],int size)
{
    cout << "Enter the Array elements: " << endl;
    for(int i=0;i<size;i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int arr[100];
    int size;
    cout << "Enter the size of the array: "<< endl;
    cin >> size;
    inputArray(arr,size);
    cout << "The minimum value in the array is: " << getMin(arr,size) << endl;
    cout << "The maximum value in the array is: " << getMax(arr,size) << endl;
    return 0;
}