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
            p = fopen("Buxipurgirlshostel.txt", "a");
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
            p = fopen("Buxipurboyspg.txt", "a");
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
            p = fopen("Buxipurgirlsroom.txt", "a");
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
            p = fopen("Gidagirlshostel.txt", "a");
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

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
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

            fprintf(p, "\nAddress : %s, %s, %s, %s\n", Hn, L, D, Pc);
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
            p = fopen("Gidagirlsroom.txt", "a");
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
