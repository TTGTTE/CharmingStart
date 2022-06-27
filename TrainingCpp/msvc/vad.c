#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>

struct cab
{
    int num;
    char *fac;
    int seats;
    char *screen;
};

struct cab2
{
    int num;
    char fac[40];
    int seats;
    char screen[10];
};

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a,i,j,c,co;
    int n = 10;
    char str[200][20];
    FILE *F1;
    struct cab2 cabpip[n];

    do
    {
        printf("\nВведите:\n");
        printf("1 - для создания структуры:\n");
        printf("2 - для использования файла:\n");
        printf("0 - для выхода:\n");
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
    printf("\n  Номер|  Факультет|  Места|  Проектор|");
    for (i = 0; i < n; i++)
        printf("\n%7d|%11s|%7d|%10s|", cabpip[i].num, cabpip[i].fac, cabpip[i].seats, cabpip[i].screen);
        printf("\n");


    printf("\nВведите количество мест: ");
        scanf("%d",&co);
        printf("\nДанные, удовлетворяющие поиску: ");
        printf("\n  Номер|  Факультет|  Места|  Проектор|");
        for (i = 0; i < n; i++)
            if (cabpip[i].seats >= co)
            printf("\n%7d|%11s|%7d|%10s|",cabpip[i].num, cabpip[i].fac, cabpip[i].seats, cabpip[i].screen);

            break;
    
        case 2:

        
        struct cab *st, *out;
        st  = (struct cab *) malloc(10 * sizeof(struct cab));

        F1 = fopen("cabinets.txt", "r");

        char *fac1; fac1 = (char *) malloc(20 * sizeof(char));
        int num1;
        char *screen1; screen1 = (char *) malloc(20 * sizeof(char));
        int seats1; 

        int k = 0;

        for (i=0; feof(F1) == 0; i++)
        {  
        fscanf(F1,"%d\n%s\n%d\n%s\n", &num1, fac1, &seats1, screen1);
        (st+i)->num  = num1;
        (st+i)->fac = (char*) malloc(20 * sizeof(char));
        strcpy((st+i)->fac, fac1);
        (st+i)->seats  = seats1;
        (st+i)->screen = (char*) malloc(20 * sizeof(char));
        strcpy((st+i)->screen, screen1);
        k++;
        }

        fclose(F1);

        printf("\n  Номер|  Факультет|  Места|  Проектор|\n");
        for(i = 0; i < k; ++i, ++st)
        {   
            printf("%7d|%11s|%7d|%10s|\n", st->num, st->fac, st->seats, st->screen);
        }

        printf("\nВведите минимальное количество мест в кабинете: ");
        scanf("%d",&co);
        printf("\nДанные, удовлетворяющие поиску: ");
        printf("\n Номер | Факультет | Места | Проектор |\n");
        for (i = 0; i < k; ++i, ++st)
            {
            if (seats1 >= co)
            printf("%7d|%11s|%7d|%10s|\n", num1,fac1,seats1,screen1);
            }
            break;
        }
    }
    while (a != 0);

return 0;
}