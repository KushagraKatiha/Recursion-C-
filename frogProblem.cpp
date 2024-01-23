#include<iostream>
using namespace std;

// Function to find the minimum cost to reach stone N
int minimizedCost(int *arr, int idx, int n){
    if(idx == n-1) return 0;
    if(idx == n-2) return minimizedCost(arr, idx+1, n) + abs(arr[idx] - arr[idx+1]);

    int ans = min(minimizedCost(arr, idx+1, n) + abs(arr[idx]-arr[idx+1]), minimizedCost(arr, idx+2, n) + abs(arr[idx]-arr[idx+2]));

    return ans;

}
int main(){
    // There are N stones, numbered 1,2....N. For each i (1<=i<=N), the height of stone i is hi. There is a frog who is initially on stone 1. He will repeat the following action some number of times to reach stone N.
    // If the frog is currently on stone i, jump to stone i+1 or stone i+2.
    // Here, a cost of |hi-hj| is incurred, where j is the stone to land on.
    // Find the minimum possible total cost incurred brfore the frog reaches stone N.

    int arr[] = {10, 30, 40, 20, 50, 100};
    
    int ans = minimizedCost(arr, 0, 6);
    cout<<ans<<endl;
    return 0;
}