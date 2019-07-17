#include<stdio.h>
int main()
{
    int age;
    printf("Enter a number :");
    scanf("%d",&age);
    printf("you have entered %d  as your age\n",age);
    if (age>=18)                               
    {
        printf("You are valid for vote!\n");
    }
    else if(age>=10)
    {
        printf("you are not valid for vote but you can vote for kids\n");
    }
    else
    {
        ("You can not give vote!\n");
    }
    
    return 0;
}