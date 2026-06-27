#include<stdio.h>

int bus_number[10];
char name[10][20];
int choice;
char email[30];
int seat[50];
int count=1;
int mobile_number[10][10];
int option;
int j=1;
int i;

void menu();
void menu()
{

    printf("\n===== USER MENU =====");

    printf("\nENTER YOUR NAME: ");
    scanf(" %[^\n]",&name[count]);

    printf("\nENTER YOUR MOBILE NUMBER: ");
    scanf("%d",&mobile_number[count]);

    printf("\nENTER YOUR E-MAIL: ");
    scanf(" %[^\n]",&email[count]);

    count++;

    printf("\n***** YOU HAVE LOGGED IN SUCCESSFULLY *****");

    

}


void book();
void book()
{
    int found=1;
    int bus_no[5] = {101,102,103,104,105};
    printf("\nENTER YOUR NAME PLEASE: ");
    scanf(" %[^\n]",&name[j]);

    printf("\nENTER YOUR BUS NUMBER: ");
    scanf("%d",&bus_number[j]);

    for ( i = 1; i < 5; i++)
    {
        if (bus_number[j]==bus_no[i])
        {
            found=2;
            break;
        }
        
        
    }
    
    if (  found  )
    {
        printf("\nNUMBER OF SEATS YOU WANT TO BOOK: ");
        scanf("%d",&seat[j]);
        
        printf("\n\n===== YOUR %d SEATS ARE BOOKED =====",seat[j]);
        
        j++;
    }
    else
    {
        printf("\nNO BUS OF THIS NUMBER");
        
    }
    

}

void bus();
void bus()
{
    printf("\n:::::BUS SECHUDLE:::::\n");
    printf("\n\nBUS NUMBER = 101 \n STARTING = DELHI \n DESTINY = JAIPUR");
    printf("\n\nBUS NUMBER = 102 \n STARING = DELHI \n DESTINY = JODHPUR");
    printf("\n\nBUS NUMBER = 103 \n STARTING = DELHI \n DESTINY = LUCKNOW");
    printf("\n\nBUS NUMBER = 104 \n STARING = DELHI \n DESTINY = PATNA");
    printf("\n\nBUS NUMBER = 105 \n STARTING = DELHI \n DESTINY = SRINAGAR");

    
   
}



void display();
void display()
{

    if (j==1)
    {
        printf("\nNO BOOKING FOUND.");
    }

    printf("//----- BOOKING DETAILS -----//");
    

    for (int i = 1; i < j; i++)
    {
        printf("\nBUS NUMBER =      %d",bus_number[i]);
        printf("\nNAME =            %s",name[i]);
        printf("\nSEATS BOOKED =    %d",seat[i]);     
    }
    
}

void cancel_seat();
void cancel_seat()
{
    int cancel;
    int bus;
    int temp=1;

    printf("ENTER YOUR BUS NUMBER: ");
    scanf("%d",&bus);

    for ( i = 1; i < j; i++)
    {       
            if (bus_number[i]==bus)
            {
                temp=2;
                printf("\nBOOKED SEATS: %d",seat[i]);

                printf("\nENTER NUMBER OF SEATS YOU WANT TO CANCEL: ");
                scanf("%d",&cancel);
            }

            if (cancel <= seat[i])
            {
                seat[i] = seat[i]-cancel;

                printf("\n**** CANCELLATION SUCCESSFULLY **** ",cancel);
                printf("\nREMAINING SEATS: %d",seat[i]);
            }
            else
            {
                printf("\nYOU CAN'T CANCEL MORE SEAT THAN YOU BOOKED ");
            }
            break;
        }

        if (temp == 1)
        {
            printf("\n--- BOOKING NOT FOUND ---");
            
        }
        
        
}

int main()
{
    printf("\n******** BUS RESERVATION SYSTEM ********");

    while (1)
    {
        printf("\n1. LOGIN: ");
        printf("\n2. EXIT: ");

        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&choice);

        if (choice==1)
        {
            menu();

            while (1)
            {
                
                

                printf("\n----- USER MENU -----");
                
                printf("\n1.BOOK SEAT: ");
                printf("\n2.CANCLE SEAT: ");
                printf("\n3.BUS SECHUDLE: ");
                printf("\n4.CHECK STATUS: ");
                printf("\n5.LOGOUT: ");
                
                printf("\n*** ENTER ANY OPTION ***");
                scanf("%d",&option);
                
                
                
                
                switch (option)
                {
                    case 1:
                    
                    book();
                    
                    break;
                    
                    case 2 :
                    
                    cancel_seat();
                    
                    break;
                    
                    case 3:
                    
                    bus();
                    
                    break;
                    
                    case 4:
                    display();
                    
                    break;   
                    
                    case 5:
                    
                    printf("\n::YOUR ARE LOGGED OUT::");
                    
                    return 0;
                    
                    default:
                    printf("INVALID OPTION, TRY AGAIN: ");
                    break;
                }
                
            }
        }
        else if (choice==2)
        {
            
            printf("===== THANK YOU FOR VISITING =====");
            break;
        }

        else
        {
            printf("INVALID CHOICE: ");
        }
        
        
        
        
    
    }

}      
    

