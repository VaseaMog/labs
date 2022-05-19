#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() 
{
    char s[100];
    printf("Введите последовательность: \n");
    scanf("%s", s);
    int c[256];
    bool is_unique;
    int min_i = 0, min_j = 0;
    int l = strlen(s);
    for (int i = 0; i < l; i ++) 
        for (int j = i; j < l; j ++) 
        {
            for (int k = 0; k < 255; k ++) 
            {
                c[k] = 0;
                is_unique = true;
            }
            for (int k = i; k <= j; k ++) 
            {
                c[s[k]]++;
                if (c[s[k]] > 1) 
                {
                    is_unique = false;
                    break;
                }
            }
            if (is_unique && (j - i >= min_j - min_i)) 
            {
                min_i = i;
                min_j = j;
            }
        }
    for (int i = min_i; i <= min_j; i ++)
        printf("%c", s[i]);
}
