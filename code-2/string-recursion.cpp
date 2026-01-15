#include<iostream>
#include<string>
using namespace std;


void reverseStr(string &str , int s , int e ){
        if(s>e)
                return;
        int temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
        reverseStr(str , s,e);

}
       
int main(){

        string name = "madam";
        cout<<name<<endl;
        reverseStr(name,0,name.length()-1);
        cout<<name;
        return 0;
}