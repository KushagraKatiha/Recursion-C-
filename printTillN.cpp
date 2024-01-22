#include<iostream>
using namespace std;

// Function to print numbers till n
void printNum(int n){
    // Base case
    if(n < 1) return;

    // Assumption 
    printNum(n-1);

    // Self Work
    cout<<n<<endl;
}
int main(){
    // Given a number n. Find the increasing sequence from 1 to n without using any loop
    int n; cout<<"Enter a number: "; cin>>n;
    printNum(n);
    return 0;
}