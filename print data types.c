#include<stdio.h> //obsluguje operacje wyjscia wejscia
#include<stdlib.h> // dostarcza inne podstawowe funckcje

int i = 314;
float f = 123.456;
double d = 2.19;
char c = 'C';
char s[] = "Hello word!";
int zmienna;

int main()
{
    printf("%d - %f ( %.3f ) -- %f, \nC jako liczba %d, a tu jako znak z ASCI %c,\nnapis jako tablica numerów z ASCI '%s'\n", i, f, f, d, c, c, s);
    // tych typów jest troche
    
    
    printf("\nZmienna decimal ");
    scanf("%d", &zmienna);
    printf("%d", zmienna);
    
    printf("\nZmienna char c ");
    scanf(" %c",&c); // w scanf musi być spacja " %c" bo poprzedni scanf zostawia bufor nowej lini który jest prawdopodobnie podczytywany przez następny
    printf("%c", c);

    printf("\nPod zmienna i (int) podsawie abc, zmienna nie zmieni sie ");
    scanf("%d", &i);
    printf("%d", i);

    return 0;
}
