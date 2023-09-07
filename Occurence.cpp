// First and Last Occurence of an element 
#include<iostream>
using namespace std;
int main(){
    int size=8;
    int arr[size]={2,4,10,10,10,18,20};
    int ans=-1;
    int target=10;

    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=start+((end-start)/2);

        if(arr[mid]==target){
            ans=mid;
            // end=mid-1;  1st Occurence
            start=mid+1;  // last Occurence

        }else if(target<arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    
    }
    cout<<ans;


}