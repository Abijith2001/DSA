//Program to find sqrt using binary search in O(logn) time
#include<iostream>
using namespace std;

int sqrt(int n){
    long long int s = 0;
    long long int e = n-1;
    long long int mid = s + (e - s)/2;
    long long int ans = -1;
    while(s <= e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

double morePrecision(int n, int precision, int firstPart){
    double ans = firstPart;
    double factor = 1;
    for(int i = 0; i < precision; i++){
        factor = factor/10;
        for(double j = firstPart; j*j < n; j = j + factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the No. to find sqrt: "<<endl;
    cin>>n;
    int firstPart = sqrt(n);
    double withDecimal = morePrecision(n, 3, firstPart);
    cout<<"Sqrt of "<<n<<" (integer): "<<firstPart<<endl;
    cout<<"Sqrt of "<<n<<" (with precision):"<<withDecimal<<endl;
}