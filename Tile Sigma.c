#include<stdio.h> //obsluguje operacje wyjscia wejscia
#include<stdlib.h> // dostarcza inne podstawowe funckcje
#include<conio.h>


int main()
{
    int i,j,k=0;
    int d, gd;  
    
    printf("Podaj liczbe calkowita: ");
    int key = 0;
    while (1) {
        key = getch();
        if (key == 27) {  // Sprawdzamy, czy naciśnięto "Esc" (numer 27)
            return 0;  // Wyjście z programu
        }
        if (key == 13) {  // Sprawdzamy, czy naciśnięto "Enter" (numer 13)
            break;  // Wyjście z pętli wczytywania szerokości
        }
        putchar(key);  // Wyświetlanie wprowadzanych znaków (umożliwia wprowadzanie szerokości)
    }
    scanf("%d", &d);
    printf("d: %d", d);
    gd = d/2;
    printf("\ngd: %d\n",gd);


    if (gd<2)
    {
        printf("Nie mozna utworzyc sigmy");
        return 1;
    }


    for (i=0; i<(d+2*gd); i++)  // Petla leci n razy plus gora i dół równy połowie d czyli 2gd
    {
        if (i==0 || i==(d+2*gd)-1)  // górny i dolny pasek
            {
                for (j=0; j<d; j++)
                {
                    printf("#");
                }
            }
        else if (i<gd || i>(d+gd-1)) //paski #****#
        {
            for (j=0 ; j<d; j++)
            {                     
                if (j>0 && j<d-1)
                {
                    printf("*");
                }
                else
                {
                    printf("#");
                }
            }
            
        }
        else  // cała reszta sigmy
        {
            // printf("k %d, d/2 %d, gd %d, l %d",k, d/2,gd);
            if (k<gd)
            {
                // printf("IF pierwszy");
                for (j=0 ; j<d; j++)    // górna część
                {                     
                    if (k==j)
                    {
                        printf("\\");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                k++;
                
            }
            else if (k == gd && d%2 != 0)  //opcjonalny środek
            {
                // printf("IF drugi");
                for (j=0 ; j<d; j++)
                {                     
                    if (k==j)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                k++;
            }
            else if(k<d && k >= gd)
            {
                // printf("IF trzeci");
                for (j=0 ; j<d; j++)
                {
                    if (d-k-1==j)
                        {
                            printf("/");
                        }
                        else
                        {
                            printf("*");
                        }
                }
                k++;
            }
            
        }
        printf("\n");
    }
}