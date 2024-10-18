// complete the function source
#include "../include/gen_number.h"
#include <cstdlib>
#include <iostream>
#include <cmath>

int generateNum(){
    int num = rand() % 90 + 10;
    return num;
}

int doubleNum(int num){
    return (num * 2);
}

int reverseDigit(int num){
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int sumDigits(int num){
    int sum = 0;
    while (num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int raisePow2_3_4(int num, int exp){
    if (exp == 2 || exp == 3 || exp == 4){
        return pow(num, exp);
    }else{
        std::cout << "Only power 2, 3, or 4 is allowed." << std::endl;
        return num;
    }
}

int raiseFirstDigitPowSecondDigit(int num){
    if (num >= 10 && num <= 99) {
        int firstDigit = num / 10;
        int secondDigit = num % 10;
        return pow(firstDigit, secondDigit);
    } else {
        std::cout << "The number must be two digits in length." << std::endl;
        return num;
    }
}

int raiseFirstAndSecondDigitPowThirdDigit(int num){
    if (num >= 100 && num <= 999) {
        int firstTwoDigits = num / 10;
        int lastDigit = num % 10;
        if (lastDigit <= 4) {
            return pow(firstTwoDigits, lastDigit);
        } else {
            std::cout << "The last digit must be <= 4." << std::endl;
            return num;
        }
    } else {
        std::cout << "The number must be three digits in length." << std::endl;
        return num;
    }
}
