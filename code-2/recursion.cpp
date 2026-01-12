#include<iostream>
using namespace std;

int fact(int n){
        if(n == 0)
                return 1;

        int smallerProblem = fact(n-1);
        int biggerProblem = n*smallerProblem;
        return biggerProblem;
}

int power(int n){
        if(n == 0)
                return 1;
        int sp = power(n-1);
        int bg = 2*sp;
        return bg;
}

int main(){

        int n;
        cout<<"Enter Num : ";
        cin>> n;
        cout<<power(n);
        // cout<<fact(n);
        return 0;
}