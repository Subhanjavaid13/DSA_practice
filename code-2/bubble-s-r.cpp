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
        int arr[10] = {5,10,11,33,12,19,55,88,1,10};
        bubbleSort(arr,10);
        for(int i =0 ; i<10 ; i++){
                cout<<arr[i];
        }
}