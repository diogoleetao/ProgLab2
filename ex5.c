#include <stdio.h>
#include <stdlib.h>

int eprimo(int n), a, b;

int main()
{
    int n;

    scanf("%d", &n);

    a = eprimo(n);
    b = eprimo(n+2);

    if(a==1 && b==1)
        printf("%d e %d são um par de primos.", n, n+2);
    else
        printf("%d e %d não são um par de primos.", n, n+2);

    return 0;
}

int eprimo(int n){

    int i;

    for(i=2; i<n; i++){

        if(n%i==0){
            return 0;
        }
        return 1;
    }

}
