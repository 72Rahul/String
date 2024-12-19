/*The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.*/


#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>& chars) {
    int idx = 0;
    for(int i = 0; i<chars.size(); i++){
        char ch = chars[i];
        int count = 0;
        while(i<chars.size() && chars[i]==ch){
            count++;
            i++;
        }
    
    chars[idx++] = ch;
        if (count > 1) { 
            string str = to_string(count); 
            for (char dig : str) { 
                chars[idx++] = dig; 
                }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
    }

int main(){
    vector<char> vec = {'a', 'b', 'b', 'b', 'b', 'b', 'b','b', 'b', 'b','b', 'b', 'b'};
    cout<<"Old string is : \n";
    for(int i = 0; i<vec.size(); i++){
        cout<<vec[i]<<" \t";
        
    }
    cout<<endl;
    int compressedLength = compress(vec);
    cout<<"New string is : \n";
    for(int i = 0; i<compressedLength; i++){
        cout<<vec[i]<<" \t";
    }
    
    return 0;
}