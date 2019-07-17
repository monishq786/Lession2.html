/*#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case '0':
        case 'u':
        printf("%c is a vowel",ch);
        break;
        default:
        printf("%c is a constent",ch);
        break;
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int ch,a,b,s;
    printf("\n . Addition");
    printf("\n . Even Odd");
    printf("\n . Natural no.");
    printf("\n . Enter your choice :");
    scanf("%d",&ch);
    switch(ch)
{
case 1:
    printf("enter two numebers");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("Sum %d",s);
    break;
case 2:
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
    break;
case 3:
    printf("Enter a number\n");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
      printf("%d\n",b);
    break;
default:
    printf("You have entred Wrong choice\n");
}
return 0;
}
