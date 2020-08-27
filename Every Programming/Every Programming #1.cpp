/* 
정수 배열(int array)가 주어지면 가장 큰 이어지는 원소들의 합을 구하시오. 단, 시간 복잡도는 O(n).

Given an integer array, find the largest consecutive sum of elements.

예제}
Input: [-1, 3, -1, 5]
Output: 7 // 3 + (-1) + 5

Input: [-5, -3, -1]
Output: -1 // -1

Input: [2, 4, -2, -3, 8]
Output: 9 // 2+ 4 + (-2) + (-3) + 8 
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) (((a) > (b))? (a) : (b))

int arraySUM(int [], int size);

int main()
{
    int *array, size;
    printf("정수 몇 개 넣을 것입니까? ");
    scanf("%d", &size); // 4

    // 동적 할당
    array = (int *)malloc(sizeof(int) * (size));

    printf("정수를 입력하세요 ex) -1 3 -1 5 : ");
    for(int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("%d", arraySUM(array, size));
    return 0;
}

int arraySUM(int array[], int size)
{
    int number2;
    int number = number2 = array[0];

    for(int i = 1; i < size; i++) {
        number = MAX(number + array[i], array[i]);
        number2 = MAX(number, number2);
    }
    return number2;
}