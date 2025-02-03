#include<iostream>
#include<cmath>
// #include<bits/stdc++.h>
using namespace std;

// We have to count the number of digits in a number
int countDigit(int num){
    int count = 0;
    int ld; //last digit or ld = 0;
    while(num > 0){
        ld = num % 10;
        num = num / 10;
        count ++;
    }
    return count;
}

int cntDigit(int number){
    int counter = (int) (log10(number) + 1);
    return counter;
}

int reverseNumber(int num){
    int ld;
    int rev = 0;
    while (num > 0){
        ld = num % 10;
        num = num / 10;
        rev = (rev*10) + ld;
    }
    return rev;
}

int main() {
    // int number;
    // cout << "Enter the value of numbers for digit count: ";
    // int counter = cntDigit(number);
    // cout << "The number of digits in the number: " << counter << endl;

    int num;
    cout << "Enter the number to reverse: ";
    cin >> num;
    int reversed = reverseNumber(num);
    cout << "Reversed number: " << reversed << endl;
    return 0;
}
