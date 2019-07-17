//ascii value of any number or character
/* #include<stdio.h>
int main()
{
    int num;
    printf("Enter a character");
    scanf("%D",&num);
    printf("Ascii value of %D is %c",num,num);
    return 0;
}*/
//Program for ascii table
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        printf("Ascii value of %c is %d\n",i,i);
    }
return 0;
}
/* #include<stdio.h>
int main()
{
    int ch,a,b,c;
    printf("\n\t [1] add");
    printf("\n\t [2] Edit");
    printf("\n\t [3] Delete");
    printf("\n\t [4] Exit");
    printf("\n\t Enter you choice");
    scanf("%d",&ch);
if(ch==1)
    {
        printf("Add Option selected");
    }
else if(ch==2)
    {
        printf("Edit option seleted");
    }
else if(ch==3)
    {
        printf("Delet optionn seletced");
        printf("Enter two number");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("Add of %d",c);
    }
else if(ch==4)
    {
        printf("Exit option selected");
    }
else
    {
      printf("Wrong press key");
    }
return 0;
}
 */