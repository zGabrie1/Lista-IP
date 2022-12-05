#include<stdio.h>

int main() {
    int acorde, tonica, terca, quinta;
    scanf("%i", &acorde);
    if(acorde > 100) {
        tonica = acorde%100;
        terca = acorde%10;
        quinta = acorde;
    }
    printf("%i %i %i", tonica, terca, quinta);
}