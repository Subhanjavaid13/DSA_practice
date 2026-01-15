#include<iostream>
using namespace std;
//binary search through recursion


bool binarySearch(int *arr, int s , int e, int key){
        if(s>e){
                return 0;
        }
        int mid = s+(e-s)/2;

        if(arr[mid] == key){
                return 1;
        }
        if(arr[mid]<key){
                return binarySearch(arr,mid+1,e,key);
        }else{
        return binarySearch(arr,s,mid-1,key);
        }
}
int main(){

        int arr[10] = {0,2,5,6,10,12,35,45,67,81};
        int size = 10;
        bool ans = binarySearch(arr,0,size-1,0 );
        if(ans){
                cout<<"Element is present ";
        }else{
                cout<<"Element is not present ";

        }
        return 0;
}