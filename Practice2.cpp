// WAP to form a biggest number from the numeric string

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& vec, int n){
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for(int i : vec){
        curr_sum+=i;
        max_sum = max(max_sum, curr_sum);
        if(curr_sum<0){
            curr_sum = 0;
        }
    }
    cout<<max_sum<<endl;
}

int main(){
    vector<int> vec = {1, -2, 0, 7, 2};
    for(int st = 0; st<vec.size(); st++){
        for(int i = st; i<vec.size(); i++){
            for(int end = st; end<=i; end++){
                cout<<vec[end]<<" ";
            }
            cout<<" \t";
        }
        cout<<endl;
        
    }
    maxSubArray(vec, vec.size());


}