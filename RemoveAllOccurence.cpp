/*Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

Find the leftmost occurrence of the substring part and remove it from s.
Return s after removing all occurrences of part.

A substring is a contiguous sequence of characters in a string.*/

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string removeOccurrences(string s, string part) {
    
    while(s.find(part)<s.length() && s.length()>0){
    s.erase(s.find(part),part.length());
    
    }
    return s;
    }

int main(){
    string str = "daabcbaabcbc";
    string part = "abc";
    
    cout<<removeOccurrences(str, part)<<endl;
    return 0;

}