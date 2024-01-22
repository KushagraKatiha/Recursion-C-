#include<iostream>
using namespace std;

// Function to print k multiples of num 
void printMultiples(int num, int k){
    // Base Case
    if(k < 1) return;

    printMultiples(num, k-1);
    cout<<num * k<<endl;
}

int main(){
    // Given a num and a value k. Print k multiples of num.
    int num = 12;
    int k = 5; 

    printMultiples(num, k);

    return 0;
}