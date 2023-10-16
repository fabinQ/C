#include<stdio.h> //obsluguje operacje wyjscia wejscia
#include<stdlib.h> // dostarcza inne podstawowe funckcje

int i =0;
int d, gd;

int main()
{
    printf("Podaj liczbe calkowita: ");
    scanf(" %d", &d);
    printf("%d", d);

    gd = d/2;
    printf("\n%d\n",gd);

    if (gd<1)
    {
        printf("Nie mozna utworzyc sigmy");
    }
    else{
        for (i=0; i<gd; i++)
        {
            for (int j=0 ; j<d; j++)
            {
                if (i==0)
                {
                    printf("#");
                }
                else{
                    printf("#");
                    for(int k = 0; k<d-2;k++)
                    {
                        printf("*");
                    }
                    printf("#\n");
                }
            }
            printf("\n");
            
            
        }
    }
}