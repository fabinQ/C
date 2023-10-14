#include<stdio.h> //obsluguje operacje wyjscia wejscia
#include<stdlib.h> // dostarcza inne podstawowe funckcje
#define True 1
#define False 0
typedef int bool;

int main()
{
    bool first_var = False;
    if (first_var)
    {
        printf("warunek prawdziwy");
    }
    else
    {
        printf("warunek nie prawdziwy");
    }
    
    return 0;
}