#include <stdio.h>

int main(){
    int x;
    scanf("%i", &x); //abc
    int a = x /100;
    int c = x % 10;
    int b = (x / 10) % 10;
    //printf("%i, %i, %i", a, b, c);
    if (b == 0 && c != 0){
        printf("%i%i%i\n%i%i%i\n%i%i%i\n", a,c,b, c,a,b, c,b,a);
    }
    if (c == 0 && b != 0){
        printf("%i%i%i\n%i%i%i\n%i%i%i\n", a,c,b, b,a,c, b,c,a);
    }
    if (b == 0 && c == 0){
        printf("only %i\n", x);
    }
    if (b != 0 && c != 0){
        printf("%i%i%i\n%i%i%i\n%i%i%i\n%i%i%i\n%i%i%i\n", a,c,b, b,a,c, b,c,a, c,b,a, c,a,b); 
    }
}