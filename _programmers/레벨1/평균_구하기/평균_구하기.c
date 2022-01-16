#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    for (int i = 0; i < arr_len; i++) {
        answer += (double) arr[i] / arr_len;
    }
    return answer;
}

int main(void)
{
    int arr1[] = {1, 2, 3, 4};
    size_t arr1_len = 4;

    int arr2[] = {5, 5};
    size_t arr2_len = 2;

    double answer1 = solution(arr1, arr1_len);
    double answer2 = solution(arr2, arr2_len);
    
    printf("%f\n%f", answer1, answer2);
}