#include <stdio.h>
int n;
int i = 1;
int suma = 0;
int main() {
       printf("Introduce un numero: ");
    scanf("%d", &n);
    while (i <= n) {
        suma = suma + i;
        i = i + 1;
    }
}