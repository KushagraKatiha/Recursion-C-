#include<iostream>
using namespace std;

// Function to find nth fibonacci using recursion
int fib(int n){

    if(n == 0) return 0;
    if(n == 1) return 1;

    int ans = fib(n - 1) + fib(n - 2);

    return ans; 
}
int main(){
    // Find nth fibonacci using recursion 
    int n; cout<<"Enter a number: "; cin>>n;

    int ans = fib(n);

    cout<<ans<<endl;
    return 0;
}