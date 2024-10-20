#include <stdio.h>

int main(void) {
    int Y, X;
    printf("inserire il numero reale positivo Y:");
    scanf("%d", &Y);
    X = 0;
    while (X*X < Y) {
        X++;
    }
    X--;
    printf("%d alla seconda e' il numero massimo minore di %d", X, Y);
}
