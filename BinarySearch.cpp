#include<iostream>
using namespace std;

int main(){
    int size=10;
    int arr[size]={1,2,3,4,5,6,7,8,9,10};
    int target=9;

    int start=0;
    int end=size-1;
    

    while(start<=end){
        // int mid=(start+end)/2; --> Overflow can be there  
        int mid=start+((end-start)/2); // --> prevents Overflow

        if(target==arr[mid]){
            cout<<mid;
            break;
        }else if(target<arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
        
        
    }
    

    return 0;
}