#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int s=0;
    int e= size-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int even[6]={10,20,30,40,50,60};
    int odd[5]={1,2,3,4,5};
    int evenIndex=binarySearch(even,6,40);
    int oddIndex=binarySearch(odd,5,2);
    cout<<"Index of 40 is: "<<evenIndex<<endl;
    cout<<"Index of 2 is: "<<oddIndex<<endl;
    //searching key which is not in the array
    int a = binarySearch(even,6,8);
    int b = binarySearch(odd,5,10);
    cout<<"Index of 8 is: "<<a<<endl;
    cout<<"Index of 10 is: "<<b<<endl;
}