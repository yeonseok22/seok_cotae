#include <stdio.h>

int main(void)
{
    int a;      // 가로
    int b;      // 세로
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++) 
    {
        for (int j = 1; j <= a; j++)
        {
            printf("%c", '*');
        }
        printf("\n");
    }
    return 0;
}