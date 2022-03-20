//program to find first and last occurence of an element in the array.
#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int s=0;
    int e=size-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int even[6]={10,20,20,20,50,60};
    int firstIndex=firstOccurence(even,6,20);
    int lastIndex=lastOccurence(even,6,20);
    int totatNoOfOccurenceOfNo = (lastIndex-firstIndex)+1;
    cout<<"Index of first occurence of 20 is: "<<firstIndex<<endl;
    cout<<"Index of last occurence of 20 is: "<<lastIndex<<endl;
    cout<<"Total no. of Occurence of 20 is: "<<totatNoOfOccurenceOfNo<<endl;
}