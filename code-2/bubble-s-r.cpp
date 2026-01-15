#include<iostream>
using namespace std;

//bubble sort through recursion

void bubbleSort(int *arr , int n){
        if(n == 0 || n==1){
                return ;
        }
        for(int i =0; i<n-1;i++){
                if(arr[i]>arr[i+1]){
                        int temp = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                }
        }
        bubbleSort(arr,n-1);
}
int main(){

        int arr[5] = {5,3,1,4,2};
        bubbleSort(arr,5);
        for(int i =0 ; i<5 ; i++){
                cout<<arr[i];
        }
}