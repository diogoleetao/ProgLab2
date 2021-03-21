#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, j, i, k, l;

    printf("Insira a altura do triângulo:\n");
    scanf("%d", &h);
    for(i=1; i<=h; i++){
        for(j=1; j<=i; j++){
        putchar('*');
        }
        putchar('\n');
    }

    for(k=1; k<=h-1; k++){
        for(l=h-1; l>=k; l--){
        putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
