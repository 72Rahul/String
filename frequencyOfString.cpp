#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "fajdkhfdslfhaoifd";
    sort(str.begin(), str.end());
    
    int max_freq = 0;
    char ans;
    int current_freq = 1;

    for(int i = 1; i < str.length(); i++){
        if(str[i] == str[i - 1]){
            current_freq++;
        } else {
            if(current_freq > max_freq){
                max_freq = current_freq;
                ans = str[i - 1];
            }
            current_freq = 1;
        }
    }

    // Check last character sequence
    if(current_freq > max_freq){
        max_freq = current_freq;
        ans = str[str.length() - 1];
    }

    cout << "Most frequent character is: " << ans << " with frequency: " << max_freq << endl;
    return 0;
}
