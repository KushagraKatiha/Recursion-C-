#include<iostream>
using namespace std;

// Function to find factorial using recursion 
int fact(int n){
    if(n == 1) return 1;

    int ans = n * fact(n-1);

    return ans;
}

int main(){
    // Find factorial of the given number n using recursing

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int answer = fact(n);

    cout<<answer<<endl;

    return 0;
}