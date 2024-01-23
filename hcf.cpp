#include<iostream>
using namespace std;
// Function to find hcf using recursion (subtraction method)
int gcdSub(int a, int b){
    if(b > a) return gcdSub(b, a);
    if(b == 0) return a;

    int ans = gcdSub(b, a-b);

    return ans;
}

// Function to find hcf using recursion
int gcd(int a, int b){
    // Euclid's theorem : If we subtract a smaller number from a larger one, (we can reduce the large number), but the hcf will not change
    //  a + bq = r
    if(a < b) return gcd(b, a);
    // Base case
    if(b == 0) return a;

    int ans = gcd(b, a%b); 
    
    return ans; 
}
int main(){
    // Given two numbers x and y.Find the greatest common divisor of x and y using recursion
    int x, y; cout<<"Enter two numbers: "; cin>>x; cin>>y;

    int ans = gcd(x, y);
    int ansSub = gcdSub(x, y);
    cout<<ans<<endl;
    cout<<ansSub<<endl;
    return 0;
}