#include<stdio.h> //obsluguje operacje wyjscia wejscia
#include<stdlib.h> // dostarcza inne podstawowe funckcje
#include<conio.h>


int main()
{
    while (1) 
    {
        int i,j,k=0;
        int d, gd;  
        printf("Wciśnij dowolny klawisz, aby kontynuować (ESC, aby wyść) \n");
        int key = 0;


        while (1) {
            key = getch();

            if (key == 27) {  // Sprawdzamy, czy naciśnięto "Esc" (numer 27)
                return 0;  // Wyjście z programu
            }
            else{   // Sprawdzamy, czy naciśnięto coś innego niż ESC
                printf("Podaj liczbe calkowita (ESC, aby wyść): ");
                scanf("%d", &d);  
                // d = key;
                break;  // Wyjście z pętli wczytywania szerokości
            }
            putchar(key);  // Wyświetlanie wprowadzanych znaków (umożliwia wprowadzanie szerokości)
        }


        if (d<=2) {
            printf("Błędna wartość. Wprowadź liczbę całkowitą.\n");
            while (getchar() != '\n');  // Czyść bufor wejścia
            continue;  // Przerywamy obecny cykl i pytamy ponownie
        }
        printf("\nd: %d", d);
        gd = d/2;
        printf("\ngd: %d\n",gd);


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
                
                if (k<gd)
                {
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
   return 0; 
}