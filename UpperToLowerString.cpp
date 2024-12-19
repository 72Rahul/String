/*
Convert the string input from the user into upper case and lower case */

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin, str);

cout<<"convert using for loop"<<endl;
//convert into upper case using for loop

    for(int i = 0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i]<='z'){
            str[i] -=32;
        }
    }
    cout<<str<<endl;

//convert into lower case

    for(int i = 0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i]<='Z'){
            str[i] +=32;
        }
    }
    cout<<str<<endl;

cout<<"convert using functions"<<endl;
// by using functions

string s = "if you are going to achieve excellence in big things.";

transform(s.begin(), s.end(), s.begin(), :: toupper);
cout<<s<<endl;

transform(s.begin(), s.end(), s.begin(), :: tolower);
cout<<s<<endl;
    return 0;

}