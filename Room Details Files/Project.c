#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include "manjeet.h"



int main()
{

    for (;;)
    {
        dormitory();
        printf("\t\t\t\t\t\t\t\t\t\t\t\t===========================\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t    A RoomKart For You  \n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t===========================\n\n");
        printf("1. Renter 	(I want Room)\n");
        printf("2. Owner 	(I provide Room)\n\n");
        printf("\nEXIT : PRESS 0\n\n");
        printf("Which service you want ?\nPlease press the number : ");
        int n;
        scanf("%d", &n);

        switch (n)
        {
        case 0:
        {
            exit(0);
        }
        case 1:
        {
            system("cls");
            dormitory();
            FILE *p; // Printing States Name
            char a;
            p = fopen("States.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            printf("\tPlease choose the number : ");
            scanf("%d", &n);

            switch (n)
            {
            case 1:
            {
                printf("Work in Progress in ANDHRA PRADESH\n");
                break;
            }
            case 2:
            {
                printf("Work in Progress in ARUNACHAL PRADESH\n");
                break;
            }
            case 3:
            {
                printf("Work in Progress in ASSAM\n");
                break;
            }
            case 4:
            {
                printf("Work in Progress in Bihar\n");
                break;
            }
            case 5:
            {
                printf("Work in Progress in CHHATTISGARH\n");
                break;
            }
            case 6:
            {
                printf("Work in Progress in GOA\n");
                break;
            }
            case 7:
            {
                printf("Work in Progress in GUJARAT\n");
                break;
            }
            case 8:
            {
                printf("Work in Progress in HARYANA\n");
                break;
            }
            case 9:
            {
                printf("Work in Progress in HIMACHAL PRADESH\n");
                break;
            }
            case 10:
            {
                printf("Work in Progress in JHARKHAND\n");
                break;
            }
            case 11:
            {
                printf("Work in Progress in KARNATAKA\n");
                break;
            }
            case 12:
            {
                printf("Work in Progress in KERALA\n");
                break;
            }
            case 13:
            {
                printf("Work in Progress in MADHYA PRADESH\n");
                break;
            }
            case 14:
            {
                printf("Work in Progress in MAHARSHTRA\n");
                break;
            }
            case 15:
            {
                printf("Work in Progress in MANIPUR\n");
                break;
            }
            case 16:
            {
                printf("Work in Progress in MEGHALAYA\n");
                break;
            }
            case 17:
            {
                printf("Work in Progress in MIZORAM\n");
                break;
            }
            case 18:
            {
                printf("Work in Progress in NAGALAND\n");
                break;
            }
            case 19:
            {
                printf("Work in Progress in ODISHA\n");
                break;
            }
            case 20:
            {
                printf("Work in Progress in PUNJAB\n");
                break;
            }
            case 21:
            {
                printf("Work in Progress in RAJASTHAN\n");
                break;
            }
            case 22:
            {
                printf("Work in Progress in SIKKIM\n");
                break;
            }
            case 23:
            {
                printf("Work in Progress in TAMIL NADU\n");
                break;
            }
            case 24:
            {
                printf("Work in Progress in TELANGANA\n");
                break;
            }
            case 25:
            {
                printf("Work in Progress in TRIPURA\n");
                break;
            }
            case 26:
            {
                system("cls");

                dormitory();
                printf("Please enter the city where you want room in UTTAR PRADESH : ");
                char area[50];
                char n[] = "noida", N[] = "Noida";
                char l[] = "lucknow", L[] = "Lucknow";
                char b[] = "banaras", B[] = "Banaras";
                char a[] = "agra", A[] = "Agra";
                char al[] = "allahabad", Al[] = "Allahabad";
                char gh[] = "ghaziabad", Gh[] = "Ghaziabad";
                char g[] = "gorakhpur", G[] = "Gorakhpur";
                char k[] = "kanpur", K[] = "Kanpur";
                char v[] = "varanasi", V[] = "Varanasi";
                char p[] = "prayagraj", P[] = "Prayagraj";
                scanf("%s", &area);
                if (strcmp(area, g) == 0 || strcmp(area, G) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = gorakhpur();
                        if (x == 0)
                            break;
                        getch();
                        // system("cls");
                    }
                }
                else if (strcmp(area, l) == 0 || strcmp(area, L) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = lucknow();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else if (strcmp(area, b) == 0 || strcmp(area, B) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = varanasi();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else if (strcmp(area, n) == 0 || strcmp(area, N) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = noida();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else if (strcmp(area, v) == 0 || strcmp(area, V) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = varanasi();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else if (strcmp(area, a) == 0 || strcmp(area, A) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = agra();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else if (strcmp(area, k) == 0 || strcmp(area, K) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = kanpur();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else if (strcmp(area, gh) == 0 || strcmp(area, Gh) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = ghaziabad();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else if (strcmp(area, al) == 0 || strcmp(area, Al) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = allahabad();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else if (strcmp(area, p) == 0 || strcmp(area, P) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = allahabad();
                        if (x == 0)
                            break;
                        getch();
                    }
                }

                else
                {
                    printf("Sorry! Currently we are not available in %s\n\n", area);
                }

                break;
            }
            case 27:
            {
                printf("Work in Progress in UTTARAKHAND\n");
                break;
            }
            case 28:
            {
                printf("Work in Progress in WEST BENGAL\n");
                break;
            }
            }

            break;
        }

        case 2:
        {
            system("cls");
            dormitory();
            FILE *p; // Printing States Name
            char a;
            p = fopen("States.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            printf("\n\tFor Location Purpose\n");
            printf("\tPlease choose your state number : ");
            scanf("%d", &n);

            switch (n)
            {
            case 1:
            {
                printf("Work in Progress in ANDHRA PRADESH\n");
                break;
            }
            case 2:
            {
                printf("Work in Progress in ARUNACHAL PRADESH\n");
                break;
            }
            case 3:
            {
                printf("Work in Progress in ASSAM\n");
                break;
            }
            case 4:
            {

                break;
            }
            case 5:
            {
                printf("Work in Progress in CHHATTISGARH\n");
                break;
            }
            case 6:
            {
                printf("Work in Progress in GOA\n");
                break;
            }
            case 7:
            {
                printf("Work in Progress in GUJARAT\n");
                break;
            }
            case 8:
            {
                printf("Work in Progress in HARYANA\n");
                break;
            }
            case 9:
            {
                printf("Work in Progress in HIMACHAL PRADESH\n");
                break;
            }
            case 10:
            {
                printf("Work in Progress in JHARKHAND\n");
                break;
            }
            case 11:
            {
                printf("Work in Progress in KARNATAKA\n");
                break;
            }
            case 12:
            {
                printf("Work in Progress in KERALA\n");
                break;
            }
            case 13:
            {
                printf("Work in Progress in MADHYA PRADESH\n");
                break;
            }
            case 14:
            {
                printf("Work in Progress in MAHARSHTRA\n");
                break;
            }
            case 15:
            {
                printf("Work in Progress in MANIPUR\n");
                break;
            }
            case 16:
            {
                printf("Work in Progress in MEGHALAYA\n");
                break;
            }
            case 17:
            {
                printf("Work in Progress in MIZORAM\n");
                break;
            }
            case 18:
            {
                printf("Work in Progress in NAGALAND\n");
                break;
            }
            case 19:
            {
                printf("Work in Progress in ODISHA\n");
                break;
            }
            case 20:
            {
                printf("Work in Progress in PUNJAB\n");
                break;
            }
            case 21:
            {
                printf("Work in Progress in RAJASTHAN\n");
                break;
            }
            case 22:
            {
                printf("Work in Progress in SIKKIM\n");
                break;
            }
            case 23:
            {
                printf("Work in Progress in TAMIL NADU\n");
                break;
            }
            case 24:
            {
                printf("Work in Progress in TELANGANA\n");
                break;
            }
            case 25:
            {
                printf("Work in Progress in TRIPURA\n");
                break;
            }
            case 26:
            {

                system("cls");

                dormitory();
                printf("\tWelcome in UrDormitory\n\n");

                printf("Please Enter the City : ");
                char area[50];
                char g[] = "gorakhpur", G[] = "Gorakhpur";
                /*char n[] = "noida", N[] = "Noida";
                char l[] = "lucknow", L[] = "Lucknow";
                char b[] = "banaras", B[] = "Banaras";
                char a[] = "agra", A[] = "Agra";
                char al[] = "allahabad", Al[] = "Allahabad";
                char gh[] = "ghaziabad", Gh[] = "Ghaziabad";

                char k[] = "kanpur", K[] = "Kanpur";
                char v[] = "varanasi", V[] = "Varanasi";
                char p[] = "prayagraj", P[] = "Prayagraj";*/
                scanf("%s", &area);
                if (strcmp(area, g) == 0 || strcmp(area, G) == 0)
                {
                    for (;;)
                    {
                        int x;
                        system("cls");
                        x = gorakhpurL();
                        if (x == 0)
                            break;
                        getch();
                        // system("cls");
                    }
                }

                else
                {
                    printf("Sorry! Currently we are not available in %s\n\n", area);
                }

                break;
            }
            case 27:
            {
                printf("Work in Progress in UTTARAKHAND\n");
                break;
            }
            case 28:
            {
                printf("Work in Progress in WEST BENGAL\n");
                break;
            }
            }

            break;
        }

        default:
        {
            printf("Sorry! You have choosen wrong option.\n");
        }
        }

        getch();
        system("cls");
    }
    return 0;
}
