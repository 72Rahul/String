/*
WAP to find the biggest number from the numeric string input from the user*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1;
    cout<<"Enter the numeric string : ";
    getline(cin, str1);

    //using for loop
    cout<<"Using loop\n";
    for(int i = 0; i<str1.size()-1; i++){
        for(int  j =i+1; j<str1.length(); j++){
        if(str1[i]<str1[j]){
            swap(str1[i], str1[j]);
        }
        }
    }
    cout<<"Biggest number from numeric string is : "<<str1<<endl;
cout<<endl;
    // using function
    cout<<"Using Function\n";
    string str2;
    cout<<"Enter the numeric string : ";
    getline(cin, str2);
    sort(str2.rbegin(), str2.rend());

    cout<<"Biggest number from numeric string is : "<<str2<<endl;
    return 0;
}