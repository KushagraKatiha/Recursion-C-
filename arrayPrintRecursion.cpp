#include<iostream>
using namespace std;

// Function to print array using recursion
void printArray(int *arr, int idx, int n){
    // base case
    if(idx == n) return;
    
    // self work
    cout<<*(arr + idx)<<endl;    // cout<<arr[idx]<<endl;

    // assumption
    printArray(arr, idx+1, n);
}

int main(){
    // Print the given array using recursion

    int n = 5;
    int arr[n] = {2,3,1,4,5};

    printArray(arr, 0, n);
    return 0;
}