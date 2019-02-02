#include<stdio.h>
int main()
{
          int a,b,i;
          int *arr,n;
          printf("enter the no\n");
          scanf("%d",&n);
          arr=(int *)malloc(n);
          for(i=0;i<n;i++)
          scanf("%d",(arr+i));
          printf("enter two int values \n");
          scanf("%d%d",&a,&b);
          printf("the sum of two no %d and %d is %d",a,b,(a+b));
getch();
}
