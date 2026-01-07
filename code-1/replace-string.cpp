#include<iostream>
#include <string>

using namespace std;


string replaceString(string s){
        string temp = "";
        for(int i = 0; i<s.length(); i++){
                if(s[i] == ' '){
                        temp.push_back('@');
                        temp.push_back('4');
                }else{
                        temp.push_back(s[i]);
                }
        }
        return temp;
}


int main(){


        string s = "My Name is Subhan";
        cout<<"Replace string is : "<<replaceString(s)<<endl;

        return 0;
}