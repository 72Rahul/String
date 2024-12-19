/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool isAlphanumeric(char ch){
    if((ch>='0' && ch<='9')||(tolower(ch)>='a' && tolower(ch)<='z')){
        return true;
    }
    return false;
}

bool isPalindrome(string str){
    int st = 0, end = str.length()-1;
    while(st< end){
        if(!isAlphanumeric(str[st])){
            st++;
            continue;
        }
        if(!isAlphanumeric(str[end])){
            end--;
            continue;
        }
        
        if(tolower(str[st]) != tolower(str[end])) {
    return false;
        }
        st++;
        end--;

    }
    return true;
}


int main(){
    string str = "racecar";
    if(isPalindrome(str)){
    cout<<"String is Palindrome"<<endl;
    }
    return 0;

}