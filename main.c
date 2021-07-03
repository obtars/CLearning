#include<stdio.h>
int main()
{
   int grades [10];
   int i;
   int sum;
   float ava = 0.0f;

   printf("Enter The Grades:\n");

   for (i=0; i<10; i++)
   {
       printf("%2u=",i+1);
       scanf("%d",&grades[i]);
       sum += grades[i];
   }
   ava = (float)sum/10;

   printf("The Ava is:%.2f",ava);

   return 0;
}
