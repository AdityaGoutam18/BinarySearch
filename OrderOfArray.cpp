#include<iostream>
using namespace std;
int main(){
    int size=10;
    int arr[size]={1,2,3,4,5,6,7,8,9,10};

    // if(arr[0]<arr[1]){
    //     cout<<"Asscending Order";
    // }else{
    //     cout<<"Descending Order";
    // }
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+((end-start)/2);

        if(arr[mid]<arr[mid+1]){
            cout<<"Asscending Order";
            break;
        }else if(arr[mid]>arr[mid+1]){
            cout<<"Descending Order";
            break;
        }else{
            cout<<"array is not sorted";
        }
    }
}