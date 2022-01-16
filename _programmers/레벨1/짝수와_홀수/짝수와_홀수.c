#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char* solution(int num) {
    char* answer = (char*)malloc(sizeof(char) * 5);
    
    if (num % 2) answer = "Even";
    else answer = "Odd";
    
    return answer;
}

int main(void) {
    int n1 = 3, n2 = 4;
    char* answer1 = solution(n1);
    char* answer2 = solution(n2);

    printf("%s\n%s", answer1, answer2);

    return 0;
}