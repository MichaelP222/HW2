// complete the source code
#include "../include/post_process.h"
#include <cmath>

bool isNumPrime(int num){
    if (num <= 1){
        return false;
    }
    if (num == 2){
        return true;
    }
    if (num % 2 == 0){
        return false;
    } 

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int addTen(int num){
    if (num < 10){
        return num += 10;
    }else{
        return num;
    }
}

