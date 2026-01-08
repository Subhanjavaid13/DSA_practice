#include <iostream>
using namespace std;

void printSum(int arr[][3], int row, int col) {
    int max = 0;
    int rowIndex = -1;
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum += arr[i][j];
        }
        // cout<<sum<<" ";
        if(sum > max){
            max =sum;
            rowIndex = i;
        }
    }
    cout<<"Max sum : "<<max << " at index : "<<rowIndex;
}

int main() {
    int arr[3][3];
    cout << "Enter elements : ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    printSum(arr,3,3);

    return 0;
}
