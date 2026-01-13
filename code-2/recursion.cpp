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

void sayDigit(int n , string arr[]){
        if(n==0)
                return;

        int digit = n%10;
        n = n/10;
        sayDigit(n,arr);
        cout<<arr[digit]<<" ";
}

int main(){

        string arr[10] = {"zero","one","two","three","four",
        "five","six","seven","eight","nine"};
        
        int n;
        cout<<"Enter Num : ";
        cin>> n;
        sayDigit(n,arr);


        // cout<<power(n);
        // cout<<fact(n);
        // cout<<counting(n);
        // cout<<fibonacciSeries(n);
        return 0;
}