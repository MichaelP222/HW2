// student needs to write this
#include "include/gen_number.h"
#include "include/post_process.h"
#include "include/print_menu.h"
#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
    srand((unsigned) time(NULL));
    int num;
    int choice;
    // Check if a command line argument was provided and assign it to num using atoi(), else call the random number generator function.
    if (argc > 1) {
        num = atoi(argv[1]);
    } else {
        num = generateNum();
    }
    // Print the value of the number
    cout << "The number is: " << num << endl;
    // Print the menu and ingest the choice selected by the user
    do {
        print_menu();
        cin >> choice;
        if (choice == 1){
            num = doubleNum(num);
        }else if (choice == 2){
            num = reverseDigit(num);
        }else if (choice == 3){
            int exp;
            cin >> exp;
            num = raisePow2_3_4(num, exp);
        }else if (choice == 4){
            num = sumDigits(num);
        }else if (choice == 5){
            num = raiseFirstDigitPowSecondDigit(num);
        }else if (choice == 6){
            num = raiseFirstAndSecondDigitPowThirdDigit(num);
        }else if (choice == 9){
            break;
        }else {
            cout << "Invalid choice." << endl;
        }
        // check for overflow
        if (num < 0){
        cout << "Overflow occured!" << endl;
        num = generateNum();
        cout << num << endl;
        }
        // check if prime
        if (isNumPrime(num)){
            cout << num << " is prime number." << endl;
        } else {
            cout << num << " is not prime number." << endl;
        }
        // check if zero
        if (num == 0){
        cout << "The number is now 0. Exiting program." << endl;
        break;
        }
        // call addTen function
        num = addTen(num);
        // repeat
    } while (choice != 9);

	return 0;
}
