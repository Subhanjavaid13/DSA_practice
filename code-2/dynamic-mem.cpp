#include<iostream>
using namespace std;

int printSum(int *arr , int n){
        int sum = 0;
        for(int i =0; i<n ; i++){
                sum += arr[i];
        }
        return sum;
}
int main(){
        int n;
        cout<<"Enter : ";
        cin>> n;

        int *arr = new int[n];
        cout<<"Enter Numbers : ";
        for(int i = 0 ; i<n; i++){        
                cin>>arr[i];
        }
        int ans = printSum(arr,n);

        cout << "sum is : "<<ans;
        delete []arr;

}