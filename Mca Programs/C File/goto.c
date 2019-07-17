#include<stdio.h>

int main()
{
    int no;
    char ans;
    start:
    printf("Enter a number");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    printf("Do you want to exit\n");
    scanf("%c",&ans);
    if (ans =='n'|| ans=='N')
    {
        goto start;
    }
return 0;
}
