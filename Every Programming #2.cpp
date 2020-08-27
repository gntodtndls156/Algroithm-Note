/* 
피보나치 배열은 0과 1로 시작하며, 다음 피보나치 수는 바로 앞의 두 피보나치 수의 합이 된다. 정수 N이 주어지면, N보다 작은 모든 짝수 피보나치 수의 합을 구하여라.

Fibonacci sequence starts with 0 and 1 where each fibonacci number is asum of two previous fibonacci numbers, Given an integer N, find the sum of all even fibonacci numbers

예제)
Input: N = 12
Output: 10 // 0, 1, 2, 3, 5, 8 중 짝수인 2 + 8 = 10
 */

#include <stdio.h>

int fib(int, int, int, int *);

int main()
{
    int number;
    printf("Input: ");
    scanf("%d", &number);
    int n1 = 0, n2 = 1;
    int point_sum = 0;
    fib(number, n1, n2, &point_sum);
    printf("짝수 피보나치 수의 합은: %d 입니다.", point_sum);
    return 0;
}

int fib(int number, int n1, int n2, int *point_sum)
{
    int sum = n1 + n2;
    if (number <= sum)
        return 0;
    n1 = n2;
    n2 = sum;
    if (sum % 2 == 0) {
        *point_sum = *point_sum + sum;
    }
    return fib(number, n1, n2, point_sum);
}