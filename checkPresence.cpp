#include<iostream>
using namespace std;

// Function to check presence
bool checkPresence(int *arr, int idx, int n, int x){
    // base case
    if(idx == n) return false;

    // Self work and assumption
    if((*(arr+idx) == x) || checkPresence(arr, idx+1, n, x)) return true;

    return false;
}

int main(){
    // Given an array of numbers and a value x, check if the x is present in the array or not
    int arr[] = {5,4,1,8,6,-9,8,2,3,5};
    int n = 10;
    int x = 1000;

    bool ans = checkPresence(arr, 0, n, x);
    if(ans == true){
        cout<<"Target value is present"<<endl;
    }else{
        cout<<"Target value is not present"<<endl;
    }
    return 0;
}