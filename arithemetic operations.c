/* to perform arithemetic operatins */
#include<stdio.h>
int main()
{
int x,y;
printf("enter the values of x and y:");
scanf("%d %d",&x,&y);
printf("the sum of %d and %d is: %d\n",x,y,(x+y));
printf("the subtraction of %d and %d is: %d\n",x,y,(x-y));
printf("the product of %d and %d is: %d\n",x,y,(x*y));
printf("the quotent of %d and %d is: %d\n",x,y,(x/y));
printf("the remainder of %d and %d is: %d\n",x,y,(x%y));
return 0;
}
