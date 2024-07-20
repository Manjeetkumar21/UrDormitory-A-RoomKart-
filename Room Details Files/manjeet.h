#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>




void dormitory(void)
{
	printf("UUUUUUUU     UUUUUUUU                 DDDDDDDDDDDDD                                                                       iiii          tttt  \n");
	printf("U::::::U     U::::::U                 D::::::::::::DDD                                                                   i::::i      ttt:::t\n");
	printf("U::::::U     U::::::U                 D:::::::::::::::DD                                                                  iiii       t:::::t\n");
	printf("UU:::::U     U:::::UU                 DDD:::::DDDDD:::::D                                                                            t:::::t\n");
	printf(" U:::::U     U:::::Urrrrr   rrrrrrrrr   D:::::D    D:::::D    ooooooooooo   rrrrr   rrrrrrrrr      mmmmmmm    mmmmmmm   iiiiiiittttttt:::::ttttttt       ooooooooooo   rrrrr   rrrrrrrrryyyyyyy           yyyyyyy\n");
	printf(" U:::::D     D:::::Ur::::rrr:::::::::r  D:::::D     D:::::D oo:::::::::::oo r::::rrr:::::::::r   mm:::::::m  m:::::::mm i:::::it:::::::::::::::::t     oo:::::::::::oo r::::rrr:::::::::ry:::::y         y:::::y \n");
	printf(" U:::::D     D:::::Ur:::::::::::::::::r D:::::D     D:::::Do:::::::::::::::or:::::::::::::::::r m::::::::::mm::::::::::m i::::it:::::::::::::::::t    o:::::::::::::::or:::::::::::::::::ry:::::y       y:::::y  \n");
	printf(" U:::::D     D:::::Urr::::::rrrrr::::::rD:::::D     D:::::Do:::::ooooo:::::orr::::::rrrrr::::::rm::::::::::::::::::::::m i::::itttttt:::::::tttttt    o:::::ooooo:::::orr::::::rrrrr::::::ry:::::y     y:::::y   \n");
	printf(" U:::::D     D:::::U r:::::r     r:::::rD:::::D     D:::::Do::::o     o::::o r:::::r     r:::::rm:::::mmm::::::mmm:::::m i::::i      t:::::t          o::::o     o::::o r:::::r     r:::::r y:::::y   y:::::y    \n");
	printf(" U:::::D     D:::::U r:::::r     rrrrrrrD:::::D     D:::::Do::::o     o::::o r:::::r     rrrrrrrm::::m   m::::m   m::::m i::::i      t:::::t          o::::o     o::::o r:::::r     rrrrrrr  y:::::y y:::::y     \n");
	printf(" U:::::D     D:::::U r:::::r            D:::::D     D:::::Do::::o     o::::o r:::::r            m::::m   m::::m   m::::m i::::i      t:::::t          o::::o     o::::o r:::::r               y:::::y:::::y      \n");
	printf(" U::::::U   U::::::U r:::::r            D:::::D    D:::::D o::::o     o::::o r:::::r            m::::m   m::::m   m::::m i::::i      t:::::t    tttttto::::o     o::::o r:::::r                y:::::::::y       \n");
	printf(" U:::::::UUU:::::::U r:::::r          DDD:::::DDDDD:::::D  o:::::ooooo:::::o r:::::r            m::::m   m::::m   m::::mi::::::i     t::::::tttt:::::to:::::ooooo:::::o r:::::r                 y:::::::y        \n");
	printf("  UU:::::::::::::UU  r:::::r          D:::::::::::::::DD   o:::::::::::::::o r:::::r            m::::m   m::::m   m::::mi::::::i     tt::::::::::::::to:::::::::::::::o r:::::r                  y:::::y         \n");
	printf("    UU:::::::::UU    r:::::r          D::::::::::::DDD      oo:::::::::::oo  r:::::r            m::::m   m::::m   m::::mi::::::i       tt:::::::::::tt oo:::::::::::oo  r:::::r                 y:::::y          \n");
	printf("      UUUUUUUUU      rrrrrrr          DDDDDDDDDDDDD           ooooooooooo    rrrrrrr            mmmmmm   mmmmmm   mmmmmmiiiiiiii         ttttttttttt     ooooooooooo    rrrrrrr                y:::::y           \n");
	printf("                                                                                                                                                                                              y:::::y            \n");
	printf("                                                                                                                                                                                             y:::::y             \n");
	printf("                                                                                                                                                                                            y:::::y              \n");
	printf("                                                                                                                                                                                           y:::::y               \n");
	printf("                                                                                                                                                                                           y:::::y               \n");
	printf("                                                                                                                                                                                           yyyyyyy               \n");
	
}





void category(void)
{
    printf("1. Hostel for Boys.\n");
    printf("2. Hostel for Girls.\n");
    printf("3. PG for Boys.\n");
    printf("4. PG for Girls.\n");
    printf("5. Room on Rent for Boys.\n");
    printf("6. Room on Rent for Girls.\n");
    printf("\n\t=====>> Choose your option <<=====\n");
}


char room[50];
char name[50];
long long mob1;
long long mob2;
char avail[50];
char range1[50];
char range2[50];
char Pc[10];
char D[20];
char L[20];
char Hn[10];
int i;

long long check(long long a)
{
    long long num;
    int c;
    while (c != 10)
    {
        c = 0;
        scanf("%llu", &num);
        long long temp = num;
        while (temp > 0)
        {
            temp = temp / 10;
            c++;
        }
        if (c > 10 || c < 10)
            printf("Please Enter a valid Mobile number : ");
        else
            return num;
    }
}

int gorakhpurL(void) // Gorakhpur
{
    dormitory();
    printf("\nHere are some Location in Gorakhpur\n");
    printf("1. Buxipur\n");
    printf("2. Gida (Sector 5)\n");
    printf("3. Gorakhnath\n");
    printf("4. Medical Road\n");
    printf("5. Nausad\n");
    printf("6. Padri Bazar\n");
    printf("7. Sahajanwa\n");
    printf("8. Surajkund\n");
    printf("9. Taramandal\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        system("cls");
        dormitory();
        printf("Category of your building ?\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("Buxipurboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            fflush(stdin);
            scanf("%[^\n]s", Hn);

            printf("Locality : ");
            fflush(stdin);
            scanf("%[^\n]s", L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            FILE *p;
            p = fopen("Buxipurgirlshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 3:
        {
            FILE *p;
            p = fopen("Buxipurboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            printf("PG for Girls are not present in BUXIPUR\n");

            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("Buxipurboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("Buxipurgirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in GIDA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("Gidaboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, GIDA, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            FILE *p;
            p = fopen("Gidagirlshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            
			printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, GIDA, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 3:
        {
            FILE *p;
            p = fopen("Gidaboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, GIDA, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            FILE *p;
            p = fopen("Gidagirlspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, GIDA, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("Gidaboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, GIDA, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("Gidagirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnte%[^\n]sr Your House/Flat/Appartment/Room Name : ");
            fflush(stdin);
            scanf("%[^\n]s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, GIDA, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in GORAKHNATH\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("Gorakhnathboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            FILE *p;
            p = fopen("Gorakhnathgirlshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 3:
        {

            FILE *p;
            p = fopen("Gorakhnathboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            FILE *p;
            p = fopen("Gorakhnathgirlspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("Gorakhnathboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("Gorakhnathgirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in MEDICAL ROAD\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("Medicalboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            FILE *p;
            p = fopen("Medicalgirlshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 3:
        {
            FILE *p;
            p = fopen("Medicalboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            FILE *p;
            p = fopen("Medicalgirlspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("Medicalboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("Medicalgirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in NAUSAD\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("Nausadboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            printf("Service Unavailable in NAUSAD");
            break;
        }

        case 3:
        {
            FILE *p;
            p = fopen("Nausadboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            printf("Service unavailable in Nausad.");

            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("Nausadboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("Nausadgirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in PADRI BAZAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("PBboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            FILE *p;
            p = fopen("PBgirlshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 3:
        {
            FILE *p;
            p = fopen("PBboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            FILE *p;
            p = fopen("PBgirlspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("PBboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("PBgirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 7:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SAHAJANWA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("Sahajanwaboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            FILE *p;
            p = fopen("Sahajanwagirlshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 3:
        {
            FILE *p;
            p = fopen("Sahajanwaboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            FILE *p;
            p = fopen("Sahajanwagirlspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("Sahajanwaboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("Sahajanwagirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 8:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SURAJKUND\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("Surajkundboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            FILE *p;
            p = fopen("Surajkundgirlshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 3:
        {
            FILE *p;
            p = fopen("Surajkundboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            FILE *p;
            p = fopen("Surajkundgirlspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("Surajkundboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("Surajkundgirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 9:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in TARAMANDAL\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p;
            p = fopen("Taramandalboyshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 2:
        {
            FILE *p;
            p = fopen("Taramandalgirlshostel.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 3:
        {
            FILE *p;
            p = fopen("Taramandalboyspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 4:
        {
            FILE *p;
            p = fopen("Taramandalgirlspg.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 5:
        {
            FILE *p;
            p = fopen("Taramandalboysroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        case 6:
        {
            FILE *p;
            p = fopen("Taramandalgirlsroom.txt", "a");
            fprintf(p, "\n------------------------------------------------------------\n");
            printf("\tAll the data will be stored\n");
            printf("\tPlease Enter the correct information\n");
            printf("\t====================================\n");
            printf("\nYour Name : ");
            scanf("%s", &name);
            printf("\n\n-> Details of your building\n");
            printf("\nEnter Your House/Flat/Appartment/Room Name : ");
            scanf("%s", &room);
            fprintf(p, "\t\t%s", room);

            printf("\n\nPlease Submit the Rs. range of Room\nStarts from :  ");
            scanf("%s", range1);
            printf("To : ");
            scanf("%s", &range2);
            fprintf(p, "\nRs. %s-%s/month", range1, range2);

            printf("\nCurrently Rooms are vacant or Full ?\n");
            scanf("%s", &avail);
            fprintf(p, "\t\t%s", avail);
            printf("\n-> Contact Details\n");
            printf("Mobile No. : ");
            long long temp1 = check(mob1);
            printf("Mobile No. : %llu", temp1);
            printf("\nAlternate Mobile No. : ");
            long long temp2 = check(mob2);
            printf("Alternate Mobile No. : %llu", temp2);
            fprintf(p, "\nContact for more details : %llu, %llu", temp1, temp2);
            printf("\n\n-> Please tell us about your building's Address\n");
            printf("House No. : ");
            scanf("%s", Hn);

            printf("Locality : ");
            scanf("%s", &L);

            printf("District : ");
            scanf("%s", &D);

            printf("Pin Code : ");
            scanf("%s", &Pc);

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
            fprintf(p, "------------------------------------------------------------");

            printf("\nThank You %s for Details", name);

            fclose(p);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}








int gorakhpur(void) // Gorakhpur
{
    dormitory();
    printf("\nHere are some Location in Gorakhpur\n");
    printf("1. Buxipur\n");
    printf("2. Gida (Sector 5)\n");
    printf("3. Gorakhnath\n");
    printf("4. Medical Road\n");
    printf("5. Nausad\n");
    printf("6. Padri Bazar\n");
    printf("7. Sahajanwa\n");
    printf("8. Surajkund\n");
    printf("9. Taramandal\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in BUXIPUR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Buxipurboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Buxipurgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Buxipurboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            printf("PG for Girls are not present in BUXIPUR\n");

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Buxipurboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Buxipurgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in GIDA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Gidaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Gidagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Gidaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Gidagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Gidaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Gidagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in GORAKHNATH\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Gorakhnathboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Gorakhnathgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Gorakhnathboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Gorakhnathgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Gorakhnathboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Gorakhnathgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in MEDICAL ROAD\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Medicalboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Medicalgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Medicalboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Medicalgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Medicalboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Medicalgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in NAUSAD\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Nausadboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            printf("No Girls Hostel are there in NAUSAD");
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Nausadboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            printf("No Girls PG are there in Nausad.");

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Nausadboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Nausadgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in PADRI BAZAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("PBboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("PBgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("PBboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("PBgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("PBboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("PBgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 7:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SAHAJANWA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Sahajanwaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Sahajanwagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Sahajanwaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Sahajanwagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Sahajanwaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Sahajanwagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 8:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SURAJKUND\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Surajkundboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Surajkundgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Surajkundboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Surajkundgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Surajkundboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Surajkundgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 9:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in TARAMANDAL\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Taramandalboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Taramandalgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Taramandalboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Taramandalgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Taramandalboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Taramandalgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}

int lucknow(void) // Lucknow
{
    dormitory();
    printf("\nHere are some Location in Lucknow\n");
    printf("1. Alambagh\n");
    printf("2. Aliganj\n");
    printf("3. Bangla Bazar\n");
    printf("4. Bhitauli\n");
    printf("5. Gomti Nagar\n");
    printf("6. Guramba\n");
    printf("7. Jankipuram\n");
    printf("8. Khadra\n");
    printf("9. Rajajipuram\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in ALAMBAGH\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Alambaghboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Alambaghgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Alambaghboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Alambaghgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Alambaghboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Alambaghgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in ALIGANJ\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Aliganjboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Aliganjgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Aliganjboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Aliganjgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Aliganjboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Aliganjgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in BANGLA BAZAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("BBboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("BBgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("BBboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("BBgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("BBboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("BBgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        printf("Work in Progress in this Area");
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in GOMTI NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Gomtiboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Gomtigirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Gomtiboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Gomtigirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Gomtiboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Gomtigirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in GURAMBA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Gurambaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Gurambagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Gurambaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Gurambagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Gurambaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Gurambagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 7:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in JANKIPURAM\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Jankipuramboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Jankipuramgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Jankipuramboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Jankipuramgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Jankipuramboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Jankipuramgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 8:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in KHADRA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Khadraboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Khadragirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Khadraboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Khadragirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Khadraboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Khadragirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 9:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in RAJAJIPURAM\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Rajajipuramboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Rajajipuramgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Rajajipuramboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Rajajipuramgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Rajajipuramboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Rajajipuramgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}

int agra(void) // Agra
{
    dormitory();
    printf("\nHere are some Location in Agra\n");
    printf("1. Sikandra\n");
    printf("2. Fatehabad Road\n");
    printf("3. Dayalbagh\n");
    printf("4. Shastripuram\n");
    printf("5. Taj East Gate Road\n");
    printf("6. Taj Ganj\n");
    printf("7. Vaibhav Nagar\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SIKANDRA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Sikandraboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Sikandragirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Sikandraboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Sikandragirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Sikandraboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Sikandragirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in FATEHABAD ROAD\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Fatehabadboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Fatehabadgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Fatehabadboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Fatehabadgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Fatehabadboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Fatehabadgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in DAYALBAGH\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Jayrambaghboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Jayrambaghgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Jayrambaghboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Jayrambaghgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Jayrambaghboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Jayrambaghgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SHASTRIPURAM\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Shastripuramboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Shastripuramgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Shastripuramboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Shastripuramgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Shastripuramboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Shastripuramgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in TAJ EAST GATE ROAD\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("TEGRboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("TEGRgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("TEGRboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("TEGRgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("TEGRboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("TEGRgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in TAJ GANJ\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("TGboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("TGgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("TGboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("TGgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("TGboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("TGgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 7:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in VAIBHAV NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("VNboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("VNgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("VNboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("VNgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("VNboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("VNgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }

    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}

int allahabad(void) // Allahabad / PRAYAGRAJ
{
    dormitory();
    printf("\nHere are some Location in Prayagraj/Allahabad\n");
    printf("1. Civil Lines\n");
    printf("2. Teliarganj\n");
    printf("3. Kalyani Devi\n");
    printf("4. Muirabad\n");
    printf("5. Muthiganj\n");
    printf("6. New Mumfordganj\n");
    printf("7. Old Katra\n");
    printf("8. Allahpur\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in CIVIL LINES\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("CLboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("CLgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("CLboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("CLgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("CLboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("CLgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in TELIARGANJ\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Teliarganjboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Teliarganjgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Teliarganjboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Teliarganjgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Teliarganjboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Teliarganjgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in KALYANI DEVI\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("KDboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("KDgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("KDboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("KDgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("KDboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("KDgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in MUIRABAD\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Muirabadboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Muirabadgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Muirabadboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Muirabadgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Muirabadboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Muirabadgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in MUTHIGANJ\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("MGboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("MGgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("MGboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("MGgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("MGboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("MGgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in NEW MUMFORDGANJ\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Mumfordganjboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Mumfordganjgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Mumfordganjboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Mumfordganjgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Mumfordganjboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Mumfordganjgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 7:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in OLD KATRA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("OKboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("OKgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("OKboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("OKgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("OKboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("OKgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 8:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in ALLAHPUR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Allahpurboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Allahpurgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Allahpurboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Allahpurgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Allahpurboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Allahpurgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }

    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}

int ghaziabad(void) // Ghaziabad
{
    dormitory();
    printf("\nHere are some Location in Ghaziabad\n");
    printf("1. Ahinsa Khand\n");
    printf("2. Crossings Republik\n");
    printf("3. Indirapuram\n");
    printf("4. Patel Nagar\n");
    printf("5. Rajendra Nagar\n");
    printf("6. Sewa Nagar\n");
    printf("7. Shakti Khand\n");
    printf("8. Shastri Nagar\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        dormitory();
        system("cls");
        printf("What are you looking for in AHINSA KHAND\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("AKboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("AKgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("AKboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("AKgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("AKboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("AKgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in CROSSING REPUBLIC\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("CRboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("CRgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("CRboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("CRgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("CRboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("CRgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in INDIRAPURAM\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("IPboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("IPgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("IPboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("IPgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("IPboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("IPgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in PATEL NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("PNboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("PNgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("PNboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("PNgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("PNboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("PNgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in RAJENDRA NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("RNboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("RNgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("RNboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("RNgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("RNboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("RNgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SEWA NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("SNboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("SNgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("SNboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("SNgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("SNboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("SNgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 7:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SHAKTI KHAND\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("SKboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("SKgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("SKboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("SKgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("SKboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("SKgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 8:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SHASTRI NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("ShastriNboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("ShastriNgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("ShastriNboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("ShastriNgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("ShastriNboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("ShastriNgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }

    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}

int kanpur(void) // Kanpur
{
    dormitory();
    printf("\nHere are some Location in Kanpur\n");
    printf("1. Arya Nagar\n");
    printf("2. Barra\n");
    printf("3. Chakeri\n");
    printf("4. Darshan Purwa\n");
    printf("5. Govind Nagar Railway Colony\n");
    printf("6. Nawabganj\n");
    printf("7. Ratan Lal Nagar\n");
    printf("8. Saket Nagar\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in ARYA NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Aryaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Aryagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Aryaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Aryagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Aryaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Aryagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in BARRA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Barraboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Barragirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Barraboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Barragirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Barraboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Barragirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in CHAKERI\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Chakeriboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Chakerigirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Chakeriboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Chakerigirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Chakeriboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Chakerigirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in DARSHAN PURWA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Darshanboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Darshangirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Darshanboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Darshangirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Darshanboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Darshangirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in GOVIND NAGAR RAILWAY COLONY\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Govindboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Govindgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Govindboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Govindgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Govindboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Govindgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in NAWABGANJ\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Nawabboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Nawabgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Nawabboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Nawabgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Nawabboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Nawabgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 7:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in RATAN LAL NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Ratanboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Ratangirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Ratanboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Ratangirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Ratanboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Ratangirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 8:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SAKET NAGAR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Saketboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Saketgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Saketboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Saketgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Saketboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Saketgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }

    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}

int varanasi(void) // Varanasi
{
    dormitory();
    printf("\nHere are some Location in Varanasi\n");
    printf("1. Akatha\n");
    printf("2. Bhullanpur\n");
    printf("3. Lanka\n");
    printf("4. Newada\n");
    printf("5. Sarnath\n");
    printf("6. Varansai Cantt\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in AKTATHA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Akathaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Akathagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Akathaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Akathagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Akathaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Akathagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in BHULLANPUR\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Bhullanpurboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Bhullanpurgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Bhullanpurboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Bhullanpurgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Bhullanpurboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Bhullanpurgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in LANKA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Lankaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Lankagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Lankaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Lankagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Lankaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Lankagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in NEWADA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Newadaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Newadagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Newadaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Newadagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Newadaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Newadagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in SARNATH\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Sarnathboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Sarnathgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Sarnathboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Sarnathgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Sarnathboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Sarnathgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in VARANASI CANTT\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Varanasiboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Varanasigirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Varanasiboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Varanasigirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Varanasiboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Varanasigirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }

    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}

int noida(void) // Noida
{
    dormitory();
    printf("\nHere are some Location in Noida\n");
    printf("1. Block C, Alpha 1\n");
    printf("2. Block C, Gamma 1\n");
    printf("3. Block H, Delta 2\n");
    printf("4. Block I, Beta 2\n");
    printf("5. Greater Noida West, (Sector 1)\n");
    printf("6. Knowledge Park 3\n");
    printf("7. Knowledge Park 5\n");
    printf("8. Noida Extension\n");
    printf("\nHOME PAGE : PRESS 11\n\n");

    printf("\tChoose your area : ");

    int n;
    scanf("%d", &n);
    switch (n)
    {
    case 11:
    {
        return 0;
    }
    case 1:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in BLOCK C, ALPHA 1\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Alphaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Alphagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Alphaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Alphagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Alphaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Alphagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 2:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in BLOCK C, GAMMA 1\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Gammaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Gammagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Gammaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Gammagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Gammaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Gammagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 3:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in BLOKC H, DELTA 2\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Deltaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Deltagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Deltaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Deltagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Deltaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Deltagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 4:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in BLOCK I, BETA 2\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Betaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Betagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Betaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Betagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Betaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Betagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 5:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in GREATER NOIDA WEST, (SECTOR 1)\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("GreaterNboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("GreaterNgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("GreaterNboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("GreaterNgirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("GreaterNboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("GreaterNgirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 6:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in KNOWLEDGE PARK 3\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("KP3boyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("KP3girlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("KP3boyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("KP3girlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("KP3boysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("KP3girlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 7:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in KNOWLEDGE PARK 5\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("KP5boyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("KP5girlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("KP5boyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("KP5girlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("KP5boysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("KP5girlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }
    case 8:
    {
        system("cls");
        dormitory();
        printf("What are you looking for in NOIDA EXTENSION\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            FILE *p; // Printing Details of Hostel for Boys
            char a;
            p = fopen("Noidaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
            FILE *p; // Printing Details of Hostel for Girls
            char a;
            p = fopen("Noidagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; // Printing Details of PG for Boys
            char a;
            p = fopen("Noidaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            FILE *p; // Printing Details of PG for Girls
            char a;
            p = fopen("Noidagirlspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 5:
        {
            FILE *p; // Printing Details of Room on rent for Boys
            char a;
            p = fopen("Noidaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; // Printing Details of Room on rent for Girls
            char a;
            p = fopen("Noidagirlsroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        default:
        {
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        break;
    }

    default:
        printf("Sorry! You have choosen wrong option\n");
    }
}
