#include <iostream>
using namespace std;

bool findTarget(int arr[][4], int target, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[3][4];

    cout << "Enter elements : ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    int tar;
    cout << "Enter target : ";
    cin >> tar;

    bool isTrue = findTarget(arr, tar, 3, 4);

    if (isTrue) {
        cout << "Element is found";
    } else {
        cout << "Element is not found";
    }

    return 0;
}
