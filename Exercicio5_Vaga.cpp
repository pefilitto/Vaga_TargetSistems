#include <stdio.h>
#include <string.h>

void Inverte(char string[], char* string2)
{
    int j = 0;
    for(int i = strlen(string) - 1; i >= 0; i--, j++)
        string2[j] = string[i];
    string2[j] = '\0';
}

int main()
{
    char string[50], string2[50];
    printf("Frase: ");
    fflush(stdin);
    fgets(string, 50, stdin);
    Inverte(string, string2);
    printf("\n%s\n", string2);
}
