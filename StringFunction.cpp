#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

// adding two strings
string s1 = "fam";
string s2 = "ily";

// 1st Method
s1.append(s2);
cout<<s1<<endl;
    
// 2nd Method
s1 = "apna";
s2 = "college";
string s3 = s1 +s2;  //concatenation
cout<<s3<<endl;


// Comparing str1 and str2

string str1 = "Pal";
string str2 = "Rahul";
cout<<(str1 <str2)<<endl;

// Length or size of strings. => str.length() || str.size()

        string str3 = "nincompoop";
        cout<<str3.length()<<endl;
        for(int i = 0; i<str3.size(); i++){
            cout<<str3[i]<<endl;
        }


 // Erase function

        string str4 = "nincompoop";
        str4.erase(3, 4); // syntax => str.erase(starting, length)
        cout<<str4<<endl;

// find  function

        string str5 = "nincompoop";
         // syntax => str.find(substring)
        cout<<str5.find("com")<<endl;   // return statring position of substring


// Accessing character in strings.
//     cout<<s3[3]<<endl;


//  // Clear the strings
//     s3.clear();
//     cout<<s3<<endl;

    

    // //     //Empty string
    // //     string str = "Rahul";
    // //     cout<<str<<endl;
    // //     str.clear();
    // //     if(str.empty()){
    // //         cout<<"String is empty"<<endl;
    // //     }
    // //     else{
    // //         cout<<"String is not empty"<<endl;
    // //     }
        

    // //     // Insert a string
    // //     string s6 = "nincompoop";
    // //     s6.insert(2, "lol");
    // //     cout<<s6<<endl;



    //     // Subatring of string
    //     string s8 = "nincompoop";

    //     string s = s8.substr(1, 2);
    //     cout<<s<<endl;

    //     // String to integer

    //     string str3 = "786";
    //     int x = stoi(str3);
    //     cout<<x+2<<endl;

    // Integer to string

    //     int y = 786;
    //     cout<<to_string(y) + "2"<<endl; 

     // sortiong in string
        // string str4 = "vijay lal pal";
        // sort(str4.begin(), str4.end());
        // cout<<str4<<endl;

    return 0;
}