#include<stdio.h>
int main()
{

    int id,pincode,age;
    char name[20];
    char address[50];
    char district[50];
    char email[30];

    printf("enter your name: ");
    scanf(" %[^\n]",name);

    printf("\nenter your age: ");
    scanf("%d",&age);

    printf("\nenter your id: ");
    scanf(" %d",&id);

    printf("\nenter your address: ");
    scanf(" %[^\n]",address);

    printf("\nenter your pincode: ");
    scanf(" %d",&pincode);
    
    printf("\nenter your district: ");
    scanf(" %[^\n]",district);

    printf("\nenter your e-mail address: ");
    scanf(" %[^\n]",email);


    printf("\n******* STUDENT DETAILS *******");

    printf("\nStudent Name: %s",name);
    printf("\nStudent Age: %d",age);
    printf("\nStudent ID: %d",id);
    printf("\nStudent Address: %s",address);
    printf("\nStudent Pincode %d",pincode);
    printf("\nStudent District: %s",district); 
    printf("\nStudent E-mail: %s",email);
    
            


  return 0;
}