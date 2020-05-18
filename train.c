#include<stdio.h>
#include<string.h>
#include<conio.h>

#define t1 " 12345           Rapti sagar sf exp             12:30           6:30            Daily"
#define t2 " 12553           Vaishali sf exp                20:45           10:25           Daily"
#define t3 " 12565           Bihar sampark kranti sf exp    23:35           11:35           Daily"
#define t4 " 12335           Rajdhani sf exp                23:55           18:55           Daily"
#define t5 " 12568           Saptkranti sf exp              1:30            11:30           Daily"
#define t6 " 15432           Bhagh exp                      2:40            23:50           Daily"
#define t7 " 12678           Amarnath sf exp                3:45            20:30           Daily"
#define t8 " 12444           Maharaja sf exp                4:00            23:00           Daily"

void choice(int);
void train_number(int);
void journey();
void pnr();
void history();
int passenger();
void payment(int);
void preview();
void cancle();
void coach(int);
void train(char[]);
struct journey
{
    char from[20],to[20],name[20],gender[10],birth[15];
    int day,month,year,age;
}j,p[];
struct account
{
   int num[16],cvv,month,year;
   char name[20];
}a;
int c;
void main()
{
    int n,i;
    char a[20],b[20];
    printf("|");
	for(i=0;i<=43;i++)
	    printf("***");
    printf("*|");
	printf("\t\t\t\t        |                                                             |\n");
	printf("\t\t\t\t |        --------------------------------------------         |\n");
	printf("\t\t\t\t |            WELCOME TO ONLINE RESERVATION SYSTEM             |\n");
	printf("\t\t\t\t |        --------------------------------------------         |\n");
	printf("\t\t\t\t |                                                             |\n");
	printf("\t\t\t\t |                                                             |\n");
	printf("\t\t\t\t |                                                             |\n");
	printf("|");
	for(i=0;i<=43;i++)
	    printf("***");
    printf("*|\n");
    printf("\t\t\t\t\t\tPlease Login :");
    printf("\n\n\t\t\t\t\t\t\tEnter User id : ");
    fflush(stdin);
    gets(a);
    printf("\n\t\t\t\t\t\t\tEnter Password : ");
    fflush(stdin);
    gets(b);
    printf("\n\t\t\t\t\t\t\t\t\t\t\tSuccessfully submited....");
    printf("\n\n\t\t\t\t\tPress Enter to continue........\n\n\n\n");
    getch();
    system("cls");
    printf("\n|");
	for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
        while(n!=5)
        {
            printf("\n\t\t\t\t\t\t    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
            printf("\n\t\t\t\t\t\t\t   PLAN YOUR JOURNEY");
            printf("\n\t\t\t\t\t\t    |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\n");
            printf("\n\t\t\tCode\tFunctions\n");
            printf("\t\t       ----------------------------------\n");
            printf("\t\t\t1. \tTRAIN TICKET RESERVATION\n\n\t\t\t2. \tPNR ENQUARY\n\n\t\t\t3. \tBOOKED TICKET HISTORY\n\n\t\t\t4. \tCANCLE TICKET\n\n\t\t\t5. \tQUIT");
            printf("\n\n\t\t\t   Enter your choice code : ");
            fflush(stdin);
            scanf("%d",&n);
            choice(n);
        }

}
void choice(int n)
{
    int i;
    switch(n)
    {
        case 1 : journey();
                 break;
        case 2 : pnr();
                 break;
        case 3 : history();
                 break;
        case 4 : cancle();
                 break;
        case 5 :
                 break;
        default : printf("\n\t\t\t\tInvalid choice. Try again\n");
                  printf("\n|");
                  for(i=0;i<=43;i++)
                    printf("===");
                  printf("=|\n");
                 break;
    }
}
void train_number(int n)
{
    int c,i;
    printf("\n");
    printf("|");
    for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
    printf("\n\t\t\t\tCode \t Coach \t Available seats \t Fare \n");
    printf("\t\t\t      -------------------------------------------------\n");
    switch(n)
    {
        case 12345 : printf("\t\t\t\t 1.\t  Sl\t  Avl.56\t\t  700\n\n\t\t\t\t 2.\t  3A\t  Avl.30\t\t  1500\n\n\t\t\t\t 3.\t  2A\t  Avl.32\t\t  2500\n\n\t\t\t\t 4.\t  1A\t  Avl.10\t\t  3500");
                     printf("\n\n\t\t\t\tEnter code for choice of coach : ");
                     scanf("%d",&c);
                     coach(c);
                     break;
        case 12553 : printf("\t\t\t\t 1.\t  Sl\t  Avl.45\t\t  700\n\n\t\t\t\t 2.\t  3A\t  Avl.35\t\t  1500\n\n\t\t\t\t 3.\t  2A\t  Avl.38\t\t  2500\n\n\t\t\t\t 4.\t  1A\t  Avl.1\t\t  3500");
                     printf("\n\n\t\t\t\tEnter code for choice of coach : ");
                     scanf("%d",&c);
                     coach(c);
                     break;
        case 12565 : printf("\t\t\t\t 1.\t  Sl\t  Avl.45\t\t  700\n\n\t\t\t\t 2.\t  3A\t  Avl.35\t\t  1500\n\n\t\t\t\t 3.\t  2A\t  Avl.38\t\t  2500\n\n\t\t\t\t 4.\t  1A\t  Avl.1\t\t  3500");
                     printf("\n\n\t\t\t\tEnter code for choice of coach : ");
                     scanf("%d",&c);
                     coach(c);
                     break;
        case 12335 : printf("\t\t\t\t 1.\t  Sl\t  Avl.45\t\t  700\n\n\t\t\t\t 2.\t  3A\t  Avl.35\t\t  1500\n\n\t\t\t\t 3.\t  2A\t  Avl.38\t\t  2500\n\n\t\t\t\t 4.\t  1A\t  Avl.1\t\t  3500");
                     printf("\n\n\t\t\t\tEnter code for choice of coach : ");
                     scanf("%d",&c);
                     coach(c);
                     break;
        case 12568 : printf("\t\t\t\t 1.\t  Sl\t  Avl.45\t\t  700\n\n\t\t\t\t 2.\t  3A\t  Avl.6\t\t  1500\n\n\t\t\t\t 3.\t  2A\t  Avl.38\t\t  2500\n\n\t\t\t\t 4.\t  1A\t  Avl.1\t\t  3500");
                     printf("\n\n\t\t\t\tEnter code for choice of coach : ");
                     scanf("%d",&c);
                     coach(c);
                     break;
        case 15432 : printf("\t\t\t\t 1.\t  Sl\t  Avl.120\t\t  700\n\n\t\t\t\t 2.\t  3A\t  Avl.35\t\t  1500\n\n\t\t\t\t 3.\t  2A\t  Avl.44\t\t  2500\n\n\t\t\t\t 4.\t  1A\t  Avl.10\t\t  3500");
                     printf("\n\n\t\t\t\tEnter code for choice of coach : ");
                     scanf("%d",&c);
                     coach(c);
                     break;
        case 12678 : printf("\t\t\t\t 1.\t  Sl\t  Avl.20\t\t  700\n\n\t\t\t\t 2.\t  3A\t  Avl.35\t\t  1500\n\n\t\t\t\t 3.\t  2A\t  Avl.38\t\t  2500\n\n\t\t\t\t 4.\t  1A\t  Avl.1\t\t  3500");
                     printf("\n\n\t\t\t\tEnter code for choice of coach : ");
                     scanf("%d",&c);
                     coach(c);
                     break;
        case 12444 : printf("\t\t\t\t 1.\t  Sl\t  Avl.66\t\t  700\n\n\t\t\t\t 2.\t  3A\t  Avl.5\t\t  1500\n\n\t\t\t\t 3.\t  2A\t  Avl.38\t\t  2500\n\n\t\t\t\t 4.\t  1A\t  Avl.1\t\t  3500");
                     printf("\n\n\t\t\t\tEnter code for choice of coach : ");
                     scanf("%d",&c);
                     coach(c);
                     break;
        default : printf("\n\n\t\t\t\t\t\tInvalid choice. Try again");
                  break;
    }
}
void history()
{
    int i;
    system("cls");
    printf("\n|");
	for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
    printf("\n\t\t\t\t\t\t\tBOOKED TICKET HISTORY");
    printf("\n\t\t\t  |");
	for(i=0;i<=24;i++)
	    printf("~~~");
    printf("~~|\n");
    printf("\n\t\t\t\t  PNR no.     Train no. Train name          Name          Class");
    printf("\n\n\t\t\t\t  6789345621  12345     Rapti sagar sf exp  Raj Kumar     1A");
    printf("\n\n\t\t\t\t  6689115622  12553     Vaishali sf exp     Sanjay Gupta  3A");
    printf("\n\n\t\t\t\t  6589555623  12335     Rajdhani sf exp     Amit Gupta    2A");
    printf("\n\n\t\t\t  |");
	for(i=0;i<=24;i++)
	    printf("~~~");
    printf("~~|\n");
    printf("\n|");
	for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
}
void cancle()
{
    int a,i;
    printf("\n|");
	for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
    printf("\n\t\t\t\t\tEnter your PNR number : ");
    scanf("%d",&a);
    printf("\n\t\t\t\t\t|");
	for(i=0;i<=15;i++)
	    printf("~~~");
    printf("~~|\n");
    printf("\n\t\t\t\t\t\tPNR  number  %d  is  cancled.\n",a);
    printf("\n\t\t\t\t\t|");
	for(i=0;i<=15;i++)
	    printf("~~~");
    printf("~~|\n");
        printf("\n|");
	for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
}
void coach(int c)
{
    int r;
    switch(c)
    {
        case 1 : system("cls");
                 r=passenger();
                 if(r>0)
                   payment(r*700);
                 else
                    system("cls");
                 break;
        case 2 : system("cls");
                 r=passenger();
                 if(r>0)
                   payment(r*1500);
                 else
                    system("cls");
                 break;
        case 3 : system("cls");
                 r=passenger();
                 if(r>0)
                   payment(r*2500);
                 else
                    system("cls");
                 break;
        case 4 : system("cls");
                 r=passenger();
                 if(r>0)
                   payment(r*3500);
                 else
                    system("cls");
                 break;
    }
}
void journey()
{
    int i,k,n;
    system("cls");
    printf("|");
    for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
    printf("\n\t\tEnter source station name : ");
    fflush(stdin);
    gets(j.from);
    printf("\n\t\tEnter destination station name : ");
    fflush(stdin);
    gets(j.to);
    printf("\n\t\tEnter date of journey(dd/mm/yyyy) : ");
    scanf("%d/%d/%d",&j.day,&j.month,&j.year);
    k=strcmp(strupr(j.from),strupr(j.to));
    switch(k)
    {
        case 0 : printf("\n\t\t\t\tInvalid choice. Try again\n");
                 break;
        case 1 :
                    printf("\n");
                    for(i=0;i<=43;i++)
                        printf("===");
                    printf("=|\n");
                    printf("\n\t\t\t Train no.\t Train name\t\t\tArival\t\tDeparture\tSchedule\n");
                    printf("\t\t\t-----------------------------------------------------------------------------------------\n");
                    printf("\t\t\t%s\n\n\t\t\t%s\n\n\t\t\t%s\n\n\t\t\t%s",t1,t2,t6,t8);
                    printf("\n\n\t\t\tEnter train number :- ");
                    scanf("%d",&n);
                    train_number(n);
                    break;
        default : train(j.to);
                  break;
    }
}
void pnr()
{
    int b,i;
    system("cls");
    printf("\n|");
	for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
    printf("\n\t\t\tEnter your PNR number : ");
    scanf("%d",&b);
    printf("\n\n\t\t\t|");
	for(i=0;i<=24;i++)
	    printf("~~~");
    printf("~~|\n");
    printf("\n\t\t\t\tPNR no.\tTrain no.\tTrain name\tPassenger name \tClass");
    printf("\n\n\t\t\t\t%d  12345  Rapti sagar sf exp   Raj kumar  F ",b);
    printf("\n\n\t\t\t|");
	for(i=0;i<=24;i++)
	    printf("~~~");
    printf("~~|\n");
    printf("\n|");
	for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
}
int passenger()
{
    int i,x,r;
    //system("cls");
    printf("\n");
    printf("|");
    for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
    printf("\n\tEnter the number of passengers(<=6): ");
    scanf("%d",&c);
    if(c<6)
        r=1;
    switch(r)
    {
      case  1 : for(i=0;i<c;i++)
                {
                    printf("\n\n\t\t\t%d passenger details...\n",i+1);
                    printf("\n\t\t\t\tEnter Name : ");
                    fflush(stdin);
                    gets(p[i].name);
                    printf("\n\t\t\t\tEnter Age : ");
                    scanf("%d",&p[i].age);
                    printf("\n\t\t\t\tEnter Gender : ");
                    fflush(stdin);
                    gets(p[i].gender);
                    printf("\n\t\t\t\tEnter Birth preference : ");
                    fflush(stdin);
                    gets(p[i].birth);
                }
                printf("\n\t\t\t\t\tPress....\n\t\t\t\t\t\t1 to Continue\n\n\t\t\t\t\t\t2 to Reset\n\n\t\t\t\t\t\t3 to Cancle");
                printf("\n\n\t\t\t\t\t\tEnter your choice : ");
                scanf("%d",&x);
                switch(x)
                {
                    case 1 :
                             break;
                    case 2 : system("cls");
                             passenger();
                             break;
                    case 3 :
                             return 0;
                    default :
                              printf("Invalid choice. Try again");
                              return 0;
                              break;
                }
                break;
        default : printf("\n\t\t\t\t\t\tInvalid choice. Try Again....");
                  printf("\n\n\t\t\t\t\t\tPress Enter to continue............");
                  getch();
                  passenger();
                  break;
    }
    return c;
}
void train(char to[20])
{
    int n,i;
    printf("\n");
    printf("|");
    for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
    printf("\n\t\t\t Train no.\t Train name\t\t\tArival\t\tDeparture\tSchedule\n");
    printf("\t\t\t---------------------------------------------------------\n");
    printf("\t\t\t%s\n\n\t\t\t%s\n\n\t\t\t%s\n\n\t\t\t%s",t1,t3,t5,t8);
    printf("\n\n\t\t\tEnter train number :- ");
    scanf("%d",&n);
    train_number(n);
}
void payment(int r)
{
    int k,m,i;
    system("cls");
    printf("|");
    for(i=0;i<=43;i++)
	    printf("===");
    printf("=|\n");
    printf("\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|");
    printf("\n\t\t\t\t\t\t\t\tPAYMENT");
    printf("\n\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|");
    printf("\n\n\t\t\t\tTotal Amount = %d",r);
    char bank[30];
    printf("\n\n\t\t\t\tPayment modes :\n\n\t\t\t\t\t1. Credit card\n\n\t\t\t\t\t2. Debit card\n\n\t\t\t\t\t3. Net Banking");
    printf("\n\n\t\t\t\tEnter code of your choice of payment : ");
    scanf("%d",&m);
    switch(m)
    {
        case 1 : system("cls");
                 printf("|");
                 for(i=0;i<=43;i++)
                    printf("===");
                 printf("=|\n");
                 printf("\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|");
                 printf("\n\t\t\t\t\t\t\t\tPAYMENT");
                 printf("\n\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|\n");
                 printf("\n\t\tEnter credit card details.....");
                 printf("\n\n\t\t\tEnter card number : ");
                 scanf("%d",&a.num);
                 printf("\n\t\t\tEnter card holder's name : ");
                 fflush(stdin);
                 gets(a.name);
                 printf("\n\t\t\tValid though(mm/yyyy) : ");
                 scanf("%d/%d",&a.month,&a.year);
                 printf("\n\t\t\tCVV number : ");
                 scanf("%d",&a.cvv);
                 system("cls");
                 printf("\n\t\t\t\t\t\tPayment completed.......");
                 printf("\n\t\t\t\t\t\tBooking conformed.\n");
                 preview();
                 break;
        case 2 : system("cls");
                 printf("|");
                 for(i=0;i<=43;i++)
                    printf("===");
                 printf("=|\n");
                 printf("\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|");
                 printf("\n\t\t\t\t\t\t\t\tPAYMENT");
                 printf("\n\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|\n");
                 printf("\n\t\tEnter debit card details.....");
                 printf("\n\n\t\t\tEnter card number : ");
                 scanf("%d",&a.num);
                 printf("\n\t\t\tEnter card holder's name : ");
                 fflush(stdin);
                 gets(a.name);
                 printf("\n\t\t\tValid though(mm/yyyy) : ");
                 scanf("%d/%d",&a.month,&a.year);
                 printf("\n\t\t\tCVV number : ");
                 scanf("%d",&a.cvv);
                 system("cls");
                 printf("\n\t\t\t\t\t\tPayment completed.......");
                 printf("\n\t\t\t\t\t\tBooking conformed.\n");
                 preview();
                 break;
        case 3 : system("cls");
                 printf("|");
                 for(i=0;i<=43;i++)
                    printf("===");
                 printf("=|\n");
                 printf("\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|");
                 printf("\n\t\t\t\t\t\t\t\tPAYMENT");
                 printf("\n\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|\n");
                 printf("\n\t\tSelect your bank :\n");
                 printf("\n\t\t\tCode\t  Bank name\n");
                 printf("\t\t      ---------------------------------");
                 printf("\n\t\t\t1.\t  State Bank of India\n\n\t\t\t2.\t  Karur Vysya Bank\n\n\t\t\t3.\t  Bank of India\n\n\t\t\t4.\t  Other");
                 printf("\n\n\t\t\tEnter your choice : ");
                 scanf("%d",&k);
                 if(k!=4)
                 {
                 switch(k)
                 {
                     case 1 : system("cls");
                              printf("|");
                              for(i=0;i<=43;i++)
                                printf("===");
                              printf("=|\n");
                              printf("\t\t\t\t\t\t      |~~~~~~~~~~~~~~~~~~~~~~~~~|");
                              printf("\n\t\t\t\t\t\t\t  STATE BANK OF INDIA");
                              printf("\n\t\t\t\t\t\t      |~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
                              printf("\n\n\t\t\tEnter User name : ");
                              fflush(stdin);
                              gets(a.name);
                              printf("\n\t\t\tEnter password : ");
                              scanf("%d",&a.num);
                              system("cls");
                              printf("\n\t\t\t\t\t\tPayment completed.......");
                              printf("\n\t\t\t\t\t\tBooking conformed.\n");
                              preview();
                              break;
                    case 2 : system("cls");
                             printf("|");
                             for(i=0;i<=43;i++)
                                printf("===");
                             printf("=|\n");
                             printf("\t\t\t\t\t\t       |~~~~~~~~~~~~~~~~~~~~~~~~|");
                             printf("\n\t\t\t\t\t\t\t    KARUR VYSYA BANK");
                             printf("\n\t\t\t\t\t\t       |~~~~~~~~~~~~~~~~~~~~~~~~|\n");
                             printf("\n\n\t\t\tEnter User name : ");
                             fflush(stdin);
                             gets(a.name);
                             printf("\n\t\t\tEnter password : ");
                             scanf("%d",&a.num);
                             system("cls");
                             printf("\n\t\t\t\t\t\tPayment completed........");
                             printf("\n\t\t\t\t\t\tBooking conformed.\n");
                             preview();
                             break;
                    case 3 : system("cls");
                             printf("|");
                             for(i=0;i<=43;i++)
                                printf("===");
                             printf("=|\n");
                             printf("\t\t\t\t\t\t      |~~~~~~~~~~~~~~~~~~~~~~~~~|");
                             printf("\n\t\t\t\t\t\t\t     BANK OF INDIA");
                             printf("\n\t\t\t\t\t\t      |~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
                             printf("\n\n\t\t\tEnter User name : ");
                             fflush(stdin);
                             gets(a.name);
                             printf("\n\t\t\tEnter password : ");
                             scanf("%d",&a.num);
                             system("cls");
                             printf("\n\t\t\t\t\t\tPayment completed.......");
                             printf("\n\t\t\t\t\t\tBooking conformed.\n");
                             preview();
                             break;
                 }
                 }
                 else
                 {
                     system("cls");
                     printf("|");
                     for(i=0;i<=43;i++)
                        printf("===");
                     printf("=|\n");
                     printf("\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|");
                     printf("\n\t\t\t\t\t\t\t\tPAYMENT");
                     printf("\n\t\t\t\t\t\t\t  |~~~~~~~~~~~~~~~~~|\n");
                     printf("\n\n\t\t\tEnter Your Bank name : ");
                     fflush(stdin);
                     gets(bank);
                     printf("\n\t\t\tEnter User name : ");
                     fflush(stdin);
                     gets(a.name);
                     printf("\n\t\t\tEnter password : ");
                     scanf("%d",&a.num);
                     system("cls");
                     printf("\n\t\t\t\t\t\tPayment completed........");
                     printf("\n\t\t\t\t\t\tBooking conformed.\n");
                     preview();
                 }
    }
}
void preview()
{
    int i;
    printf("\n\t\t\t\t\t\t\tYour Ticket\n");
    printf("|");
    for(i=0;i<=43;i++)
	    printf("~~~");
    printf("~|\n");
    printf("\n\t\t\t\tSl. no.\t Passenger name \t Age \t Gender\t  Birth preference\n");
    for(i=0;i<c;i++)
    {
        printf("\t\t\t\t %d",i+1);
        printf("\t  %s ",p[i].name);
        printf("\t\t %d ",p[i].age);
        printf("\t   %s ",p[i].gender);
        printf("\t  %s ",p[i].birth);
        printf("\n");
    }
    printf("\n");
    printf("|");
    for(i=0;i<=43;i++)
	    printf("~~~");
    printf("~|\n\n");
    printf("\n\n\t\t\t\t\tPress Enter to continue........");
    getch();
    system("cls");
}
