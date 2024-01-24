#include<iostream>
#include<vector>
using namespace std;

// Function to find the combinations
void findCombinations(string &str, int idx, vector<string> &li, string emptyString, vector<string> &result){
    if(idx == str.length()){
        result.push_back(emptyString);
        return;
    }

    int digit = str[idx] - '0';
    if(digit <= 1){
        findCombinations(str, idx+1, li, emptyString, result);
    }
    for(int i = 0; i < li[digit].size(); i++){
        findCombinations(str, idx+1, li, emptyString+li[digit][i], result);
    }
}
int main(){
    // Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number caould represent. Return the answer in any order

    vector<string> li = {"", "", "abc", "def", "ghi", "jlk", "mno", "pqrs", "tuv", "wxyz"};

    string str = "23";
    vector<string> result;

    findCombinations(str, 0, li, "", result);

    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    } 
    cout<<endl;
    return 0;
}