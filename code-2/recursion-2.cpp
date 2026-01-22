#include<iostream>
using namespace std;

bool isSorted(int *arr , int size){
        if(size == 0 || size == 1){
                return true;
        }
        if(arr[0]>arr[1]){
                return false;
        }else{
                int remainingCheck = isSorted(arr+1,size-1);
                return remainingCheck;
        }
}

int sumOfArray(int *arr , int size){

        if(size ==0){
                return 0;
        }
        return arr[0]+sumOfArray(arr+1,size-1);
}

bool linearSearch(int *arr , int size , int key){
        if(size == 0){
                return false;
        }
        if(arr[0] == key){
                return true;
        }else{
                int remainingCheck = linearSearch(arr+1,size-1,key);
                return remainingCheck;
        }
}
int main(){

        int arr[7] = {0,2,5,6,10,12,35};
        int size = 7;
        bool ans = isSorted(arr,size);
        if(ans == 1){
                cout<<"sorted "<<endl;
        }
        else{
                cout<<"Not sorted "<<endl;
        }
        int brr[5] = {1,2,4,3,5};
        cout<< sumOfArray(brr,5);
        int crr[10] = {0,2,12,33,15,29,44,14,58,26};
        int key ;
        cout<< "Enter you key here : ";
        cin>> key;
        bool isPresent = linearSearch(crr,10,key);
        if(isPresent){
                cout<<"Element is present ";
        }else{
                cout<<"Element is not present ";
        }
        return 0;
}