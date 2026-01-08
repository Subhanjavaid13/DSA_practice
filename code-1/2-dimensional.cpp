#include <iostream>
using namespace std;

void printSum(int arr[][4], int row, int col) {
    for (int i = 0; i < row; i++) {
        int sum = 0;
        for (int j = 0; j < col; j++) {
            sum = sum + arr[i][j];
        }
        cout<< "Sum is : "<<sum<<" ";
    }

}

int main() {
    int arr[3][4];
    cout << "Enter elements : ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    printSum(arr,3,4);

    return 0;
}
