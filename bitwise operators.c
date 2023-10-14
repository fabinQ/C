#include<stdio.h> //obsluguje operacje wyjscia wejscia
#include<stdlib.h> // dostarcza inne podstawowe funckcje
// 0001
// 0100

int main()
{
    printf("Wynik: %d\n",1<<2);
    printf("Wynik: %d\n",2>>1);
    printf("Wynik: %d\n",~2);

    // 0011
    // 0001
    // 0001 - wynik
    printf("Wynik: %d\n",3 & 1);

    // 0011
    // 0101
    // 0111 - wynik
    printf("Wynik: %d\n",3 | 5);
    return 0;
}