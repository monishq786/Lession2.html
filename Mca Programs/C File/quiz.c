#include<stdio.h>
int main()
{
    int math,sci;
    printf("Enter your Subjects marks\n :");
    scanf("%d%d",&math,&sci);
    printf("You have enterd Math and science marks %d and  %d \n",math,sci);
    if(math>=35&&sci>=35)
    {
        printf("You are eligble for both gift 45 Rs\n");
    }
    else if(math>=35)
    {
        scanf("%d",&math);
        printf("you get only 15 Rs Bcz you passed in math\n");
    }
    else if(sci>=35)
    {
        printf("you get also 15 Rs Bcz You only passed in science\n");
    }
    else
    {
        printf("You are Fail\n");
    }
    return 0;
}