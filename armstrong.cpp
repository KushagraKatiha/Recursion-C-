#include<iostream>
using namespace std;

// Function to get p ^ q
int power(int p, int q){

    if(q == 0) return 1;

    if(q % 2 == 0){
        int result =power(p, q/2);
        return result * result;
    }else{
        int result = power(p, (q-1)/2);
        return p * result * result;
    }
}

// Function to check armstrong
int isArmstrong(int n, int d){
    if(n == 0) return 0;

    return power(n%10, d) + isArmstrong(n/10, d);     
}

int main(){
    // Given a number n. Print if it is an armstrong number or not.
    // Armstrong Number: An armstrong number is a number if the sum of every digit in that number raised to the power of total digits in that number is equal to the number.

    int x; cout<<"Enter a number: "; cin>>x;
    int no_of_digits = 0;
    int temp = x;
    while(temp > 0){
        temp = temp/10;
        no_of_digits++;
    }

    int result = isArmstrong(x, no_of_digits);

    if(result == x){
        cout<<"Number is a armstrong number"<<endl;
    }else{
        cout<<"Number is not a armstrong number"<<endl;
    }

    return 0;
}