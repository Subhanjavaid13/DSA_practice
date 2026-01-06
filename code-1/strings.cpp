#include<iostream>
using namespace std;

bool isPalindrome(char arr[], int n){
        int s = 0;
        int e = n-1;
        while(s<=e){
                if(arr[s] != arr[e] ){
                        return 0;
                }
                else{
                        s++;
                        e--;
                }
        }
        return 1;
}


int main(){
        char name[20];
        cout<< "Enter the Character : ";
        cin>>name;
        int len = 5;
        cout<< "Palindrome or Not "<< isPalindrome(name,len)<<endl;
        return 0;
}