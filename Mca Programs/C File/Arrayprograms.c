/*#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("Enter numbers\n");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    {
      for(i=0;i<=9;i++)
      sum=sum+a[i];
      printf("Total Sum is %d\n",sum);
      avg=sum/10.0;
      printf("Avg Of Numbers %f\n",avg);
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
   int A[3][3],B[3][3],C[3][3],i,j;
   printf("Enter 9 Numbers for Matrix A\n");
   for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("\t\n%d",&A[i][j]);
   printf("Enter 9 Numbers for Matrix B\n");
   for(i=0;i<=2;i++)
    for(j=0;j<=2;j++)
    scanf("\t%d",&B[i][j]);
   for(i=0;i<=2;i++)
   {
       for(j=0;j<=2;j++)
       {
       C[i][j]=A[i][j]+B[i][j];
       printf("%d ",C[i][j]);
       }
    printf("\n");
    }
   return 0;
}