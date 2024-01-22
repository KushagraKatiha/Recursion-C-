#include<iostream>
using namespace std;

// Function to get the sum
int alternateSum(int n){
    if(n < 1) return 0;

    int ans = alternateSum(n-1) + ((n%2 == 0) ? (-n) : n);

    return ans;
}
int main(){
    // Given a number n. Find the sum of natural numbers till n but with alternate signs
    int n; cout<<"Enter a number: "; cin>>n;
    int ans = alternateSum(n);
    cout<<ans<<endl;
    return 0;
}