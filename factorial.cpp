#include <iostream>

using namespace std;

int factorial(int number, int input);

int main(){
    int number;
    cout << "** FACTORIAL CALCULATOR ***" << endl;
    cout << "NUMBER? : ";
    cin >> number;
    int input = number;
    if ( number < 0){
        cout << "your number must be bigger or equal to zero\n";
        main();
    } else {
        factorial(number, input);
    }

    return 0;
}

int factorial(int number, int input){
    int total = 1;
    while ( number > 0){
        total *= number;
        number--;
    }
    cout << input << "! = " << total << endl;
    return total;
}