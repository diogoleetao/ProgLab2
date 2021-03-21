#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c [50];
    int i;

    printf("Insira vários caracteres: \n");
    scanf("%s", &c);

    for(i=0; i<=50; i++)
    if (c[i] <= 122 && c[i] >= 97){
        c[i] = c[i] - 32;
    }
    printf("%s", c);
    return 0;
}
