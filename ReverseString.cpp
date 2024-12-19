#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    // Reverse by using loop
    cout<<"Reverse by using loop\n";
    string s = "Rahul Pal";
    int st = 0, end = s.size()-1;
    while(st<=end){
        swap(s[st], s[end]);
        st++;
        end--;
    }
    cout<<s<<endl;

    // Revere by using Functon
    cout<<"Revere by using Functon"<<endl;
    string str = "apnaCollege";
    reverse(str.begin(), str.end());
    cout<<str<<endl;
}