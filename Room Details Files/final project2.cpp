#include<stdio.h>
#include<conio.h>
#include<string.h>  
#include<stdlib.h>
#include "dormitory.h"
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
 
void chandigarh(void)
{
	system("cls");
	dormitory();
printf("\nHERE ARE SOME LOCAL AREAS OF CHANDHIGARH\n");
printf("\n1.ATTAWA\n");
printf("\n2.BADHERI\n");
printf("\n3.BAIR MAJRA\n");
printf("\n6.DERIA\n");

printf("\nchoose your area\n");
int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        system("cls");
            printf("RELATED SEARCH RESULTS FOR ATTAWA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	system("cls");
            FILE *p;
            char a;
            p = fopen("Attawaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; 
            char a;
            p = fopen("Attawagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF) 
                printf("%c", a);

            break;
        }

        case 3:
        {
           FILE *p; 
            char a;
            p = fopen("Attawaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 4:
        {
            
               printf("Sorry pg's are not available\n");
            break;
        }

        case 5:
        {
            FILE *p; 
            char a;
            p = fopen("Attawaboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; 
            char a;
            p = fopen("Attawagirlsroom.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR BADHERI\n");
        category();

        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	system("cls");
            FILE *p;
            char a;
            p = fopen("Badheriboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
			}

        case 2:
        {
        	 FILE *p;
            char a;
            p = fopen("Badherigirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
        	 FILE *p;
            char a;
            p = fopen("Badheriboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;	
        }

        case 4:
        {
        	 printf("Sorry PG'S are not available\n");
                break;
				}

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Badheriboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
        	FILE *p;
            char a;
            p = fopen("Badherigirlsroom.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR BAIR MAJIRA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        FILE *p;
            char a;
            p = fopen("Bairmajiraboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
		
            break;
        }

        case 2:
        {
        	FILE *p;
            char a;
            p = fopen("Bairmajiragirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
		

            break;
        }

        case 3:
        {
        	FILE *p;
            char a;
            p = fopen("Bairmajiraboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
        printf("WE ARE UNABLE TO FIND PG'S IN THIS AREA");

            break;
        }

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Bairmajiraboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 6:
        {
        		FILE *p;
            char a;
            p = fopen("Bairmajiragirlsroom.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR DERIA\n");
        category();

        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p;
            char a;
            p = fopen("Deriaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
        	FILE *p;
            char a;
            p = fopen("Deriagirlsshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
        	FILE *p;
            char a;
            p = fopen("Deriaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
		 printf("Sorry PG's are not available\n");

            break;
        }

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Deriaboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
        	FILE *p;
            char a;
            p = fopen("Deriagirlsrooms.txt", "r");
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


void dasuya(void)
{
	system("cls");
	dormitory();
printf("\nHERE ARE SOME LOCAL AREAS OF DASUYA\n");
printf("\n1.AJMERI\n");
printf("\n2.BHULPUR\n");
printf("\n3.GARDHIWALA\n");
printf("\n4.URMAR TANDA\n");

printf("\nchoose your area\n");
int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        system("cls");
            printf("RELATED SEARCH RESULTS FOR AJMERI\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	system("cls");
            FILE *p;
            char a;
            p = fopen("Ajmeriboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; 
            char a;
            p = fopen("Ajmerigirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF) 
                printf("%c", a);

            break;
        }

        case 3:
        {
            FILE *p; 
            char a;
            p = fopen("Ajmeriboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
            printf("PG for Girls are not present in Ajmeri\n");

            break;
        }

        case 5:
        {
            FILE *p; 
            char a;
            p = fopen("Ajmeriboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; 
            char a;
            p = fopen("Ajmerigirlsroom.txt", "r");
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
        printf("What are you looking for in BHULPUR\n");
        category();

        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p;
            char a;
            p = fopen("Bhulpurboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
        	FILE *p;
            char a;
            p = fopen("Bhulpurgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
        	FILE *p;
            char a;
            p = fopen("Bhulpurboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
        	printf("Sorry PG'S are not available\n");

            break;
        }

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Bhulpurboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
        	FILE *p;
            char a;
            p = fopen("Bhulpurgirlsrooms.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR GARDHIWALA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p;
            char a;
            p = fopen("Gardhiwalaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
        	FILE *p;
            char a;
            p = fopen("Gardhiwalagirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
        	FILE *p;
            char a;
            p = fopen("Gardhiwalaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
        printf("sorry we are not available here");
        	

            break;
        }

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Gardhiwalaboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
        	FILE *p;
            char a;
            p = fopen("Gardhiwalagirlsrooms.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR URMAR TANDA \n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p;
            char a;
            p = fopen("Urmartandaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
        	FILE *p;
            char a;
            p = fopen("Urmartandaboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
        		FILE *p;
            char a;
            p = fopen("Urmartandaboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
        		printf("Sorry PG'S are not available\n");

            break;
        }

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Urmartandagirlsrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
        	FILE *p;
            char a;
            p = fopen("Urmartandaboysrooms.txt", "r");
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
void ludhiana(void)   
{
	system("cls");
	dormitory();
printf("\nHERE ARE SOME LOCAL AREAS OF LUDHIANA\n");
printf("\n1.BATTIAN CENSUS\n");
printf("\n2.GILL CENSUS\n");
printf("\n3.JODHAN CENSUS\n");
printf("\n4.THARIKE CENSUS\n");
printf("\nchoose your area\n");
int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        system("cls");
            printf("RELATED SEARCH RESULTS FOR in BATTIAN CENSUS\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	system("cls");
            FILE *p;
            char a;
            p = fopen("Battiancensusboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; 
            char a;
            p = fopen("Battiancensusgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF) 
                printf("%c", a);

            break;
        }

        case 3:
        {
           FILE *p; 
            char a;
            p = fopen("Battiancensusboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF) 
                printf("%c", a);

            break;
        }

        case 4:
        {
        	printf("sorry we are not available");
            

            break;
        }

        case 5:
        {
            FILE *p; 
            char a;
            p = fopen("Battiancensusboysroom.txt", "r");
            while (fscanf(p, "%c", &a) != EOF) 
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; 
            char a;
            p = fopen("Battiancensusgirlsrooms.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR GILL CENSUS\n");
        category();

        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p;
            char a;
            p = fopen("Gillcensusboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 2:
        {
        	FILE *p;
            char a;
            p = fopen("Gillcensusgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 3:
        {
        	
	FILE *p;
            char a;
            p = fopen("Gillcensusboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
        	printf("sorry ,we are not available here"); 


            break;
        }

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Gillcensusboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 6:
        {
        	FILE *p;
            char a;
            p = fopen("Gillcensusgirlsrooms.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR JODHAN CENSUS\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p;
            char a;
            p = fopen("Jodhancensusboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 2:
        {
        	FILE *p;
            char a;
            p = fopen("Jodhancensusgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 3:
        {
        	FILE *p;
            char a;
            p = fopen("Jodhancensusboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 4:
        {
        	printf("Sorry PG'S are not available\n");


            break;
        }

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Jodhancensusboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 6:
        {
        	FILE *p;
            char a;
            p = fopen("Jodhancensusgirlsrooms.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR THARIKE CENSUS \n");
       category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p;
            char a;
            p = fopen("Tharikecensusboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 2:
        {
        	FILE *p;
            char a;
            p = fopen("Tharikecensusgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
        	FILE *p;
            char a;
            p = fopen("Tharikecensusboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
        	printf("Sorry PG'S are not available\n");

            break;
        }

        case 5:
        {
        	FILE *p;
            char a;
            p = fopen("Tharikecensusboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
        	FILE *p;
            char a;
            p = fopen("Tharikecensusgirlsrooms.txt", "r");
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
            printf("We are Sorry! You have choosen wrong option.\n");
            break;
        }
        }
        					
void jalandhar(void)   
{
	system("cls");
	dormitory();
printf("\nHERE ARE SOME LOCAL AREAS OF JALANDHAR\n");
printf("\n1.CHOMON\n");
printf("\n2.DHIN\n");
printf("\n3.KHAMBRA\n");
printf("\n4.SANSARPUR\n");
printf("\nChoose your area\n");
int n;
    scanf("%d", &n);
    switch (n)
    {
    case 1:
    {
        system("cls");
            printf("RELATED SEARCH RESULTS FOR CHOMON\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	system("cls");
            FILE *p;
            char a;
            p = fopen("Chomonboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
            break;
        }

        case 2:
        {
            FILE *p; 
            char a;
            p = fopen("Chomongirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF) 
                printf("%c", a);

            break;
        }

        case 3:
        {
           FILE *p; 
            char a;
            p = fopen("Chomonboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF) 
                printf("%c", a);

            break;
        }

        case 4:
        {
        	printf("Sorry pg's are not available\n");
            

            break;
        }

        case 5:
        {
            FILE *p; 
            char a;
            p = fopen("Chomonboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 6:
        {
            FILE *p; 
            char a;
            p = fopen("Chomongirlsrooms.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR DHIN\n");
        category();

        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p; 
            char a;
            p = fopen("Dhinboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);
        	

            break;
        }

        case 2:
        {
        	FILE *p; 
            char a;
            p = fopen("Dhingirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 3:
        {
        		FILE *p; 
            char a;
            p = fopen("Dhinboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
        	printf("sorry we are not available in this area");


            break;
        }

        case 5:
        {
        	FILE *p; 
            char a;
            p = fopen("Dhinboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

        	

            break;
        }

        case 6:
        {
        	FILE *p; 
            char a;
            p = fopen("Dhingirlsrooms.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR KHAMBRA\n");
        category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p; 
            char a;
            p = fopen("Khambraboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 2:
        {
        	FILE *p; 
            char a;
            p = fopen("Khambragirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 3:
        {
        		FILE *p; 
            char a;
            p = fopen("Khambraboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);

            break;
        }

        case 4:
        {
        	printf("we are not available in here");

            break;
        }

        case 5:
        {
        	FILE *p; 
            char a;
            p = fopen("Khambraboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 6:
        {
        	FILE *p; 
            char a;
            p = fopen("Khambragirlsrooms.txt", "r");
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
        printf("RELATED SEARCH RESULTS FOR SANSARPUR \n");
       category();
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
        	FILE *p; 
            char a;
            p = fopen("Sansarpurboyshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 2:
        {
        	FILE *p; 
            char a;
            p = fopen("Sansarpurgirlshostel.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 3:
        {
        		FILE *p; 
            char a;
            p = fopen("Sansarpurboyspg.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 4:
        {
        	printf("not available");

            break;
        }

        case 5:
        {
        	FILE *p; 
            char a;
            p = fopen("Sansarpurboysrooms.txt", "r");
            while (fscanf(p, "%c", &a) != EOF)
                printf("%c", a);


            break;
        }

        case 6:
        {
        	FILE *p; 
            char a;
            p = fopen("Sansarpurgirlsrooms.txt", "r");
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

int main()
{
	dormitory();
    
    printf("*****************************************************\n");
    printf("|  UR'DORMITORY |\n");
    printf("*****************************************************\n");
    printf("\nWE WELCOME YOU IN UR'DORMITORY\n\n");
    printf("\n******************\n");
    printf("1. ROOMS\n");
    printf("******************\n");
    printf("2. ACCESORIES\n");
    printf("******************\n");
    printf("WHICH SERVICE YOU WANT?\nPLEASE PRESS THAT PARTICULAR NUMBER : ");
    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    {
    	system("cls");
        printf("\t********> Select the state <*********\n");
        printf("1.  **Andhra Pradesh**\n");
        printf("2.  **Arunachal Pradesh**\n");
        printf("3.  **Assam**\n");
        printf("4.  **Bihar**\n");
        printf("5.  **Chhattisgarh**\n");
        printf("6.  **Goa**\n");
        printf("7.  **Gujrat**\n");
        printf("8.  **Haryana**\n");
        printf("9.  **Himachar Pradesh**\n");
        printf("10. **Jharkhand**\n");
        printf("11. **Karnataka**\n");
        printf("12. **Kerala**\n");
        printf("13. **Madhya Pradesh**\n");
        printf("14. **Maharashtra**\n");
        printf("15. **Manipur**\n");
        printf("16. **Meghalaya**\n");
        printf("17. **Mizoram**\n");
        printf("18. **Nagaland**\n");
        printf("19. **Odisha**\n");
        printf("20. **Punjab**\n");
        printf("21. **Rajasthan**\n");
        printf("22. **Sikkim**\n");
        printf("23. **Tamil Nadu**\n");
        printf("24. **Telangana**\n");
        printf("25. **Tripura**\n");
        printf("26. **Uttar Pradesh**\n");
        printf("27. **Uttarakhand**\n");
        printf("28. **West Bengal**\n");
        printf("\tPLEASE SELECT THE STATE NUMBER : ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
        {

            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {
            
            break;
        }
        case 5:
        {

            break;
        }
        case 6:
        {

            break;
        }
        case 7:
        {

            break;
        }
        case 8:
        {

            break;
        }
        case 9:
        {

            break;
        }
        case 10:
        {

            break;
        }
        case 11:
        {

            break;
        }
        case 12:
        {

            break;
        }
        case 13:
        {

            break;
        }
        case 14:
        {

            break;
        }
        case 15:
        {

            break;
        }
        case 16:
        {

            break;
        }
        case 17:
        {

            break;
        }
        case 18:
        {

            break;
        }
        case 19:
        {

            break;
        }
        case 20:
        {
        		system("cls");
            printf("PLEASE ENTER THE NAME OF THE CITY YOU WANT YOUR SERVICES WHERE IN PUNJAB");
            char area[50];
            char p[] = "chandigarh";
            char a[] = "dasuya";
            char m[] = "ludhiana";
            char b[] = "jalandhar";
            /*char b[] = "begusarai";*/
            scanf("%s", &area);
            if (strcmp(area, p) == 0)
                chandigarh();
            else if (strcmp(area, a) == 0)
                dasuya();
            else if(strcmp(area, m)==0)
            	ludhiana();
            else if(strcmp(area, b)==0)
            	jalandhar();

            break;
        }
        case 21:
        {

            break;
        }
        case 22:
        {

            break;
        }
        case 23:
        {

            break;
        }
        case 24:
        {

            break;
        }
        case 25:
        {

            break;
        }
        case 26:
        {

            break;
        }
        case 27:
        {

            break;
        }
        case 28:
        {

            break;
        }
        }

        break;
    }

    case 2:
    {
        printf("WE SHOULD PROVIDE ACCESORIES ALSO TO OUR CONSUMERS SOON");
    }
    }

    return 0;
}					
				
				
					
					
				
	


