#include<iostream>
using namespace std;
// Function to calculate sum of digits of a function
int sum(int n){
    if(n >= 0 && n <= 9) return n;
    
    int ans = sum(n/10) + n%10;

    return ans;
}

int main(){
    // Given an integer, find out the sum of its digit using recursion 
    int n; cout<<"Enter a number: "; cin>>n;

    int ans = sum(n);
    cout<<ans<<endl;
    return 0;
}