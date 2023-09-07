// Count of an element in an sorted array

#include<iostream>
using namespace std;

int BinarySearchFirstOccurence(int arr[], int size, int target){
    int start=0;
    int end=size-1;

    for(int i=0;i<size;i++){
        int mid=start+((end-start)/2);

        if(target==arr[mid]){
            return mid;
            end=mid-1;


        }else if(target<arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    
}

int BinarySearchLastOccurence(int arr[], int size, int target){
    int start=0;
    int end=size-1;

    for(int i=0;i<size;i++){
        int mid=start+((end-start)/2);

        if(target==arr[mid]){
            return mid;
            start=mid+1;


        }else if(target<arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    
}

int main(){
    int size=7;
    int arr[size]={2,4,10,10,10,18,20};

    int target=10;

    int first=BinarySearchFirstOccurence(arr,size,target);
    int last=BinarySearchLastOccurence(arr,size,target);

    int ans=(last-first)+1;

    cout<<ans;

}
