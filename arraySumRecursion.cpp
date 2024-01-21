#include<iostream>
using namespace std;

// Function to find array sum using recursion
int arrSum (int *arr, int idx, int size){

    if(idx == size-1) return arr[idx];

    int sum = arr[idx] + arrSum(arr, idx+1, size);

    return sum;
}

int main(){
    // Find the sum of array [2, 3, 5, 20, 1] using recursion
    int arr[5] = {2, 3, 5, 20, 1};
    int ans = arrSum(arr, 0, 5);
    cout<<ans<<endl;
    return 0;
}