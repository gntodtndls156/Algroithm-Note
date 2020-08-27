/* 
정수(int)가 주어지면, 팰린드롬(palindrome)인지 알아내시오. 팰린드롬이란, 앞에서부터 읽으나 뒤에서부터 읽으나 같은 단어를 말합니다. 단, 정수를 문자열로 바꾸면 안됩니다.

Given an integer, check if it is a palindrome.

예제)
Input: 12345
Output: False

Input: -101
Output: False

Input: 11111
Output: True

Input: 12421
Output: True
 */

#include <stdio.h>

int main() {
    long number;
    int status = 0;
    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    int i = 0;
    int arraynumber[100];
    while(number != 0) {
        arraynumber[i] = number % 10;
        number = number / 10;
        i++; // Count
    }

    i--;
    
    if (number < 0) {
        printf("False");
    } else {
        for(int j = 0; j <= i; j++) {
            if (arraynumber[j] == arraynumber[i - j]) {
                printf("%d %d |", arraynumber[j], arraynumber[i - j]);
                status = 0;
                continue;
            } else {
                status = 1;
                //break;
            }
        }
    }

    switch (status)
        {
        case 0:
            printf("True");
            break;
        case 1:
            printf("False");
            break;
        }
    return 0;
}