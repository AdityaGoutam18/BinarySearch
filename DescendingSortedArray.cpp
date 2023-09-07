#include<iostream>
using namespace std;

int main(){
    int size=10;
    int arr[size]={20,17,15,14,13,12,10,9,8,4};
    int target=4;

    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=start+((end-start)/2);

        if(target==arr[mid]){
            cout<<mid;
            break;
        }else if(target<arr[mid]){ // only change
            start=mid+1;
        }else{
            end=mid-1;
        }
    }

}