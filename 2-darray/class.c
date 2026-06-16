#include<stdio.h>
int main()
{
    int A[5]={1,3,4,5,3};
    int B[3]={4,3,2};
    int C[7];
    int k=0;

    for (int i = 0; i <5; i++)
    {
        C[k]=A[i];
        k++;
    }

    for (int i = 0; i < 3; i++)
    {
         C[k]=B[i];
         k++;
    }
    

    for (int i = 0; i <=7; i++)
    {
        printf("\n%d",C[i]);
    }
    
    return 0;
}