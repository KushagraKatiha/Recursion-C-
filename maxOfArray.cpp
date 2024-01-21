#include<iostream>
using namespace std;
// Function to find maximum of the array using recursion

int maxOfArray(int *arr, int idx, int n){

    if(idx == n-1) return arr[idx];

    int ans = max(arr[idx], maxOfArray(arr, idx+1, n));

    return ans;
}

int main(){
    // Print the max value of the array [3, 10, 3, 2, 5] using recursion

    int arr[5] = {3, 10, 3, 2, 5};
    int ans = maxOfArray(arr, 0, 5);
    cout<<"Maximum value is: "<<ans<<endl;
    return 0;
}