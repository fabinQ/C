#include<stdio.h> //obsluguje operacje wyjscia wejscia
#include<stdlib.h> // dostarcza inne podstawowe funckcje
int i =0;
int main()
{
    while(i<10)
    {
        printf("%d\n",i);
        i++;
    }
    printf("To był while \n\n");

    i = 0;
    // petla do while wykonuje sie chociaz raz
    do 
    {
        printf("%d\n",i);
        i++;
    }while(i<10);
    printf("To był do while \n\n");

    for(i=0; i<10; i++)
    {
        printf("%d\n",i);
    }
    printf("To był for \n\n");

    while(i--)
    {
        printf("%d\n",i);
    }
    printf("To była petla while z wartością logiczną 0 = False \n\n");

    i =1;
    while(i++)
    {
        printf("%d\n",i);
        if (i>=10)
        {
            break;
        }
    }
    printf("To była petla while z warunkiem i>=10 \n\n");

    //i =1;
    while(i++)
    {
        //printf("%d\nI jest rowne ",i);
        if (i%2==0)
        {
            printf("parzysta %d\n\n", i);
            break;
        }
    }
    printf("To była petla while z break na parzyste \n\n");
        
    i =20;
    while(i--)
    {
        //printf("%d\n",i);
        if (i%2!=0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    printf("To był skok continue \n\n");
    return 0;
}