#include<iostream>
using namespace std;
// Function to remove character from string
string removeChar(string &s, char ch, int idx, int size){
    // base case
    if(idx == size) return "";

    string crr = "";
    crr += s[idx];
    // assumption and self work
    string ans = (s[idx] == ch ? "" : crr) + removeChar(s, ch, idx+1, size);
    return ans;
}
int main(){
    // Remove all the occurences of 'a' from the string s = "abcax" using recursion
    string s = "abcax";
    char ch = 'a';

    string ans = removeChar(s, ch, 0, 5);
 
    cout<<ans<<endl;
    return 0;
}