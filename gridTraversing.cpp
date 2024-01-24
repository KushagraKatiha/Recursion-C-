#include<iostream>
using namespace std;

// Function to count the ways to travel a matrix
int countWays(int i, int j, int n, int m){
    // base case
    if(i == n-1 and j == m-1) return 1;
    if(i >= n || j >= m) return 0;

    // assumption and self work
    int ans = countWays(i+1, j, n, m) + countWays(i, j+1, n, m);

    return ans;
}

int main(){
    // The problem is to count all the possible paths on an mxn grid from top left (grid[0][0]) to bottom right (grid[m-1][n-1]).
    // You can only move from top to bottom or to right to left 

    int n, m; cout<<"Enter the size of grid: "; cin>>n>>m;

    int ans = countWays(0, 0, n, m);
    cout<<ans<<endl;
    return 0;
}