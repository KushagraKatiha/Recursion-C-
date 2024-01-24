#include<iostream>
#include<vector>
using namespace std;

// Function to find subsequences
void findSubsequences(string &str, int idx, int n, string result, vector<string> &arr){
    if(idx == n){
        arr.push_back(result);
        return;
    }

    findSubsequences(str, idx+1, n, result+str[idx], arr);
    findSubsequences(str, idx+1, n, result, arr);
}

int main(){
    // Given a string, we have to find out all its subsequences of it. Astring is a subsequence of a given string, that is generated by deleting some character of a given string withour changing its order.

    string str = "abcd";
    vector<string> result;

    findSubsequences(str, 0, str.length(), "", result);

    for(int i = 0; i < result.size()-1 ; i++){
        cout<<result[i]<<" ";
    }

    cout<<endl;
    return 0;
}