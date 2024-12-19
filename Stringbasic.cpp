#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){

    // Declaration
    string str = "Apna College";
    cout<<str<<endl;
    //String is Dynamic Memory => Resize at runtime
    str = "Hello";
    cout<<str<<endl;

    // Input

    string s2;
    cout<<"Enter a string :";
    getline(cin, s2);                // take input complete sentence even after spaces.
    cout<<s2<<endl;


    string s1;
    cout<<"Enter a string :";
    cin>>s1;                        //  after space it will not read.
    cout<<s1<<endl;


    return 0;
}