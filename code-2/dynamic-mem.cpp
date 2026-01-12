#include<iostream>
using namespace std;

int main(){
        int n;
        cout<<"Enter Numbers : ";
        cin>> n;

        int *arr = new int[n];

        for(int i = 0 ; i<n; i++){
                cin>>arr[i];
        }

}