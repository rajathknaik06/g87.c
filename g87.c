/*Mathew is developing a program to determine whether the digits of a given integer form an arithmetic sequence. An arithmetic sequence is a sequence of numbers in which the difference between consecutive terms is constant.



Write a program that accomplishes this task using the auto keyword for local variable declarations.



Example: Let us assume the number is 1234, the difference between all consecutive digits is 1, which is constant. So it forms an arithmetic sequence.

Input format :
The input consists of an integer N declared as an auto variable, representing the number to be checked.

Output format :
If the digits of N form an arithmetic sequence, the output prints "Yes".

Otherwise, the output prints "No"*/

#include <stdio.h>
#include <math.h>

int main() {
    auto number = 0; 
    scanf("%d", &number);

    auto prevDigit = -1;
    auto isArithmetic = 1; 
    auto difference = 0;
    auto tempNumber = abs(number);

    do {
        auto digit = tempNumber % 10;
        if (prevDigit != -1) {
            if (difference == 0) {
                difference = digit - prevDigit;
            } else {
                if (digit - prevDigit != difference) {
                    isArithmetic = 0; 
                    break;
                }
            }
        }
        prevDigit = digit;
        tempNumber /= 10;
    } while (tempNumber != 0);

    if (isArithmetic) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
