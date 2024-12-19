// WAP to convert the lower case into upper case

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin, str);

    // Convert the string
    // for(int i = 0; i<str.size(); i++){
    //     if(str[i]>='a' && str[i]<='z'){
    //         str[i]-= 32;
    //     }
    //     else if(str[i]<='Z' && str[i]>='A'){
    //         str[i]+=32;
    //     }
        
    // }
    
    //convert into upper case
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout<<str<<endl;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
   cout<<str<<endl;

}