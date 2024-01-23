#include<iostream>
#include<vector>
using namespace std;

// Function to get the sub set sum
void printSubSetSum(int *arr, int idx, int n, int sum, vector<int> &result){
    if(idx == n){
        result.push_back(sum);
        return;
    }

    printSubSetSum(arr, idx+1, n, sum+arr[idx], result);
    printSubSetSum(arr, idx+1, n, sum, result);
}
int main(){
    // Given a array of integers, print sums of all subset in it outpu sums can be in any order.
    int arr[] = {2, 4, 5};
    int n = 3;
    vector<int> result;

    printSubSetSum(arr, 0, n, 0, result);

    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<<" ";
    }

    cout<<endl;

    return 0;
}