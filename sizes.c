#include <stdio.h>

int main() {
    printf("unsigned char     %d byte(s)\n", sizeof(unsigned char));
    printf("signed char     %d byte(s)\n", sizeof(signed char));
    printf("signed short     %d byte(s)\n", sizeof(signed short));
    printf("int     %d byte(s)\n", sizeof(int));
    printf("long     %d byte(s)\n", sizeof(long));
    printf("long long int    %d byte(s)\n", sizeof(long long));
    printf("float     %d byte(s)\n", sizeof(float));
    printf("double     %d byte(s)\n", sizeof(double));
    printf("long double     %d byte(s)\n", sizeof(long double));

    int a[10];
 
    printf("a     %d byte(s)\n", sizeof(a));
    printf("int[10]     %d byte(s)\n", sizeof(int[10]));
}
