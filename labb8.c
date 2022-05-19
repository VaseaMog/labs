#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
 
int main() 
{
    char s[80], *p;
    const int esc = 27;
    while (1)
    {
        c = getch();
        printf("Enter -> ");
        scanf("%s", s);
        p = strchr(s, '.');
        int wasError = 0;
        for (int i = 0; i < strlen(s); i++)
            if (s[i] != '.' && (s[i] < '0' || s[i] > '9')) 
            {
                printf("Не число\n");
                wasError = 1;
                break;
            }
        if (wasError)
            continue;
        if (p == NULL || p == s || p == s + strlen(s) - 1 || strchr(p + 1, '.') != NULL) 
            printf("Число не вещественное\n");
        else 
        {
            printf("Число вещественное\n");
            if (c == 27)
                break;
            else
                continue;
        }
    }
    return 0;
}
