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

int main(){

        int arr[5] = {0,2,5,6,10};
        int size = 5;
        bool ans = isSorted(arr,size);
        if(ans == 1){
                cout<<"sorted "<<endl;
        }
        else{
                cout<<"Not sorted "<<endl;

        }
        return 0;
}