/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string str = "the sky is blue";
    reverse(str.begin(), str.end());

    string word = "", ans = "";

    for(int i = 0; i<str.length(); i++){
        if(str[i] != ' '){
            word = str[i] + word;
            }
        else {
                ans += word + " ";
                word = "";
            }
    }
ans += word;
cout<<"The Reverse word in given string is "<<endl;
cout<<ans<<endl;
return 0;

}