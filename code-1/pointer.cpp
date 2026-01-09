#include<iostream>
#include <string>

using namespace std;

int main(){
        // double num = 5.2;
        // cout<< sizeof(num)<<endl;
        // double *p = &num;
        // double *q = p;
        // cout<< p<<endl;
        // cout<< *p<<endl;
        // q = q+1;
        // cout<< q<<endl;
        // cout<< *q<<endl;

        int n = 10;
        int m = 5;
        int *ptr = &n;
        int **ptr2 = &ptr;
        cout<<ptr<<endl;
        cout<<ptr2<<endl;
        cout<<*ptr<<endl;
        cout<<*ptr2<<endl;
        return 0;
}