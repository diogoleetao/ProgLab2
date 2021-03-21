#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, divisores;
    float media;

    divisores = 0;
    scanf("%d", &n);

    for(i=1; i<=n; i++){

        if(n%i==0){
            media += i;
            divisores++;
            printf("%d é divisor de %d\n", i, n);
        }
    }
    printf("%.3f é a média dos divisores", media/divisores);
    return 0;
}
