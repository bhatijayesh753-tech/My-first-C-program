#include<stdio.h>
int main()
{
    char studentname[2][10];
    char subject[2][5][10];
    int marks[2][5],k=1,percentage;
    int total[2]={0,0};

    for (int i = 0; i <2 ; i++)
    {
       printf("ENTER YOUR NAME: ");
        
       scanf(" %[^\n]",&studentname[i]);
         
    

    
    for (int j = 0; j < 2; j++)
    {
        printf("ENTER YOUR %d SUBJECTS: ",k++);
        scanf(" %s",&subject[i][j]);
    
        printf("ENTER YOUR MARKS IN %s= ",subject[i][j]);
        scanf("%d",&marks[i][j]);
        total[i]+=marks[i][j];
        

    }
    
    k=1;
}    
    

for (int i = 0; i <2 ; i++)
{
        printf("\n******STUDENTS %d REPORT CARD******\n",k++);
        printf("\nSTUDENT NAME IS: %s\n",studentname[i]);

        for (int j = 0; j < 2; j++)
        {
            printf("%s : %d\n",subject[i][j],marks[i][j]);
            
        }
        
                    printf("\nYOUR TOTAL IS: %d",total[i]);
                    printf("\nYOUR PERCENTAGE IS: %.2f",percentage=total[i]/2.00);

        printf("\n");
    }
    k=1;

    
    


}