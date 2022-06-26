#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Вау

struct cab
{
    int num;
    char *fac;
    int seats;
    char *screen;
};

int main(void)
{
    int a,i,j,c,co;
    int n = 10;
    char str[200][20];
    FILE *F1;
    struct cab cabpip[n];
    struct cab *st, *out;
    st  = (struct cab *) malloc(10 * sizeof(struct cab));

    do
    {
        scanf("%d", &a);

        switch (a)
        {
        case 1:
        
        printf("\nВведите кол-во кабинетов: ");
        scanf("%d", &n);

        for (i = 0; i < n; i++)
        {
            printf("Номер кабинета: ");
            scanf("%d",&cabpip[i].num);
            printf("Факультет или отделение: ");
            scanf("%s",&cabpip[i].fac);
            printf("Количество мест: ");
            scanf("%d",&cabpip[i].seats);
            printf("Наличие проектора (да/нет): ");
            scanf("%s",&cabpip[i].screen);
        }

    printf("\nНаша таблица:");
    printf("\n Номер | Факультет | Места | Проектор ");
    for (i = 0; i < n; i++)
        printf("\n%4d %6s %11d %13s", cabpip[i].num, cabpip[i].fac, cabpip[i].seats, cabpip[i].screen);
        printf("\n");


    printf("\nВведите количество мест: ");
        scanf("%d",&co);
        printf("\nДанные, удовлетворяющие поиску: ");
        printf("\n Номер | Факультет | Места | Проектор ");
        for (i = 0; i < n; i++)
            if (cabpip[i].seats >= co)
            printf("\n%4d %6s %11d %13s",cabpip[i].num, cabpip[i].fac, cabpip[i].seats, cabpip[i].screen);

            break;
    
        case 2:

        F1 = fopen("cabinets.txt", "r");

        char *screen1; screen1 = (char *) malloc(20 * sizeof(char));
        char *fac1; fac1 = (char *) malloc(20 * sizeof(char));
        int num1,seats1; 

        for (i=0; feof(F1) == 0; i++)
        {  
        fscanf(F1,"%d\n%s\n%d\n%s\n", &num1, fac1, &seats1, screen1);
        (st+i)->num  = num1;
        (st+i)->fac = (char*) malloc(20 * sizeof(char));
        strcpy((st+i)->fac, fac1);
        (st+i)->seats  = seats1;
        (st+i)->screen = (char*) malloc(20 * sizeof(char));
        strcpy((st+i)->screen, screen1);
        }

        fclose(F1);

        for(i = 0; i < 4; ++i, ++st)
        {   
            printf("|%16d|%5s|%5d|%5s|\n", st->num, st->fac, st->seats, st->screen);
        }

        

            break;
        }
    }
    while (a != 0);

return 0;
}