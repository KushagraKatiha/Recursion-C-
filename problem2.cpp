#include<iostream>
using namespace std;

// Function to calculate p^q using recursion
int power(int p, int q){
    if(q == 0) return 1;

    int ans = p * power(p, q-1);
    return ans;
}

// Method 2:
int power2(int p, int q){

    if(q == 0) return 1;

    int ans;
    if(q %2 == 0){
        ans = power2(p, q/2) * power2(p, q/2);
    }else{
        ans = p * (power2(p, (q-1)/2) * power2(p, (q-1)/2));
    }
    
    return ans;
}
int main(){
    // Given two numbers p and q, find the value p^q using a recursive function
    int p, q; cout<<"Enter p and q: "; cin>>p>>q;

    int ans = power(p, q);
    int result = power2(p, q);

    cout<<ans<<" and from method second "<<result<<endl;    
    return 0;
}