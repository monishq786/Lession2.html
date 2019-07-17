//program for take a gift acording the marks
/*#include<stdio.h>
int main() 
{ int a;
printf("choose any one subject:\n 1 for math and science \n 2 for math\n 3 only science");
scanf("%d",&a);
if(a==1)
{
    printf("Wow You have win 45 Rs girft\n");

}
  else if(a==2||a==3)
{
    printf("Wow You have win 15 Rs gift\n");
}
else
{
    printf("Sorry Next time better luck !\n");
}

return 0;

}
//Program of simple fine max or min number
 
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number :");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("The maximum number is A \n");

    }
    else if(b>a)
    {
        printf("The maximum number is B \n");
    }
    else if(a==b)
    {
        printf("Both are equal number \n");
    }
}

//Program for Check +, - and 0
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a>0)
    {
        printf("This is a positive number\n");  
    }
    else if(a<0)
    {
        printf("This is a negative number\n");
    }
    else if(a==0)
    {
        printf("This is a zero\n");
    }
    return 0;
}
*/
//Program check for divisible by 5 11 and not
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    if(a%5==0&&a%11==0)
    {
        printf("This is devisible by both 5 and 11\n");
    }
    else if(a%11==0)
    {
        printf("This is divisible by 11\n");
    }
    else if(a%5==0)
    {
        printf("This is devisible by 5\n");
    }
    return 0;
}