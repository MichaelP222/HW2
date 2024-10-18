// complete the function source
#include "../include/gen_number.h"
#include <cstdlib>

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
        pow()
    }
}

int raiseFirstDigitPowSecondDigit(int num)

int raiseFirstAndSecondDigitPowThirdDigit(int num)
