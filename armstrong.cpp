#include<iostream>
#include<cmath>
using namespace std;

void armstrong(int number){
    int arm = number;
    int counter = (int) (log10(number) + 1);
    int rev = 0, ld = 0, sum = 0;
    while(number > 0){
        ld = number % 10;
        number = number / 10;
        sum = sum + pow(ld, counter);
    }
    if( sum == arm) {
        cout << "This is armstrong number";
    }
    else
        cout << "this is not armstrong number";
}

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;
    armstrong(num);
    return 0;
}