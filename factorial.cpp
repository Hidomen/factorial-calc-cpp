#include <iostream>

int factorial(int number, int input);

int main(){
    int number;
    std::cout << "** FACTORIAL CALCULATOR ***\n";
    std::cout << "NUMBER? : ";
    std::cin >> number;
    int input = number;
    if ( number < 0){
        std::cout << "your number must be bigger or equal to zero\n";
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
    std::cout << input << "! = " << total << '\n';
    return total;
}
