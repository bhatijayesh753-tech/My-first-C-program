#include<stdio.h>
int main ()
{

    int num[4][5];

    printf("enter any number: ");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&num[i][j]);
        }
        
    } 

    printf("output\n");
    
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf(" %-2d ",num[i][j]);
        }
        
        printf("\n");
    }
    
  return 0;
}
