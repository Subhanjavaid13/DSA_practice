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
int counting(int n){
        if(n == 1)
                return 1;
        cout<<n<<endl;
        return counting(n-1);
}

int fibonacciSeries(int n){
        if(n == 0){
                return 0;
        }else if (n == 1){
                return 1;
        }
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}
int main(){

        int n;
        cout<<"Enter Num : ";
        cin>> n;
        // cout<<power(n);
        // cout<<fact(n);
        // cout<<counting(n);
        cout<<fibonacciSeries(n);
        return 0;
}