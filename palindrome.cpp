#include<iostream>
using namespace std;

void palindrome(int num){
    int dup = num;
    int ld;
    int rev = 0;
    while(num > 0){
        ld = num % 10;
        num = num / 10;
        rev = (rev * 10) + ld;
    }
    if (rev == dup) {
        cout << "The number is palindrome";
    }
    else
        cout << "The number is not palindrome";
}

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    palindrome(number); 
    return 0;
}