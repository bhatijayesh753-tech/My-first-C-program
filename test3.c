#include<stdio.h>
int main()
{
    int num[20]={1,2,3,4,5,6,7,8,9,10};
    int minimum=num[0];
    int maximum=num[0];
    

    for (int i = 0; i < 20; i++)
    {
        if (num[i]<minimum)
        {
            minimum=num[i];
        }
        if (num[i]>maximum)
        {
            maximum=num[i];
        }
        
    }
    printf("maximum number is: %d\n",maximum);
    printf("minimum number is: %d",minimum);
}