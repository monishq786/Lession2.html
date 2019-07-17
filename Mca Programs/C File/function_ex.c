/* #include<stdio.h>
void main()
{
    void add(void);
    add();
    void Iseven(void);
    Iseven();
    void add(void);
    add();
}
void add()
{
    int a,b,c;
    printf("\nenter two number");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("The sum is %d\n",c);
}
void Iseven()
{
    int a;
    printf("\nEnter a number");
    scanf("%d",&a);
    if(a%2==0)
      printf("Even");
    else
      printf("Odd");
} */
//Take Nothing Return nothing
/*#include<stdio.h>
void main()
{
  void a(void);
  a();
  void b(void);
  b();
  void a(void);
  a();
}
void a()
{
  printf("Hello\n");
}
void b()
{
  a();
}
*/
//Take something return nothing
/*#include<stdio.h>
void main()
{
  void add(int,int);
  void mul(int,int);
  int x,y;
  printf("Enter two number");
  scanf("%d%d",&x,&y);
  add(x,y);
  mul(x,y);
 }
 void add(int a,int b)
 {
   int c;
   c=a+b;
   printf("Sum is \n%d",c);
 }
 void mul(int a,int b)
 {
   int c;
   c=a*b;
   printf("Mul is \n%d",c);
 }*/
 //Take nothing return something
 /*#include<stdio.h>
 void main()
 { 
   int s;
   int add(void);
   s=add();
   printf("Sum is %d",s);
 }
 int add()
 {
   int a,b,c;
   printf("Enter two number\n");
   scanf("%d%d",&a,&b);
   c=a+b;
   return (c);
 }*/
 // take something return something
 #include<stdio.h>
 void main()
 { 
   int s,x,y;
   int add(int ,int);
   printf("Enter two number");
   scanf("%d%d",&x,&y);
   s=add(x,y);
   printf("Sum is %d",s);
}
int add(int a,int b)
{
  int c;
  c=a+b;
  return (c);
}