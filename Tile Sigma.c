#include<stdio.h> //obsluguje operacje wyjscia wejscia
#include<stdlib.h> // dostarcza inne podstawowe funckcje



int main()
{
    int i,j,k =0;
    int d, gd;  
    
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &d);
    printf("d: %d", d);
    gd = d/2;
    printf("\ngd: %d\n",gd);

    if (gd<2)
    {
        printf("Nie mozna utworzyc sigmy");
        return 1;
    }

    // char *tab = malloc(d * sizeof(char));
    // if (tab == NULL) {
    //     printf("Blad alokacji pamieci.\n");
    //     return 1;
    // }
    for (i=0; i<(d+2*gd); i++)  // Petla leci n razy plus gora i dół równy połowie d czyli 2gd
    {
        if (i==0 || i==(d+2*gd)-1)  // górny i dolny pasek
            {
                for (j=0; j<d; j++)
                {
                    printf("#");
                }
            }
        else
        {
            if(i<gd || i>(d+gd-1))
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
            else
            {
                // y = x
                if (k<gd)
                {
                    for (j=0 ; j<d; j++)
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
                else if (k == d/2 && k%2 == 0)
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
                else if(k<d && k > d/2)
                {
                    printf("%d, %d, %d", j,k,d);
                    for (j==d ; j<d; j--)
                    {     
                        printf(" ");
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
            }
            
        }
        
        printf("\n");
        
        
    }
}