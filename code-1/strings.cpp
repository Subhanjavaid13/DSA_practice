#include<iostream>
#include <string>

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

string reverseWords(string s){
        string newStr = "";
        int n = s.length();
        for(int i =n-1; i >= 0 ;i--){
               if(s[i] == ' '){
                continue;
               }

               int end  = i;

               while(i>=0 && s[i] != ' '){
                i--;
               }
               return newStr+=(s[i]) ;
        }
}
int main(){
        // char name[20];
        // cout<< "Enter the Character : ";
        // cin>>name;
        // int len = 5;
        // cout<< "Palindrome or Not "<< isPalindrome(name,len)<<endl;

        string s ="the sky is blue";
        cout<<"Original : "<< s;
        cout<< reverseWords(s)<<endl;

        return 0;
}