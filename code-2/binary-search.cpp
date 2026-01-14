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
                binarySearch(arr,)
        }
}
int main(){

        int arr[10] = {0,2,5,6,10,12,35,45,67,81};
        int size = 10;
       
        return 0;
}