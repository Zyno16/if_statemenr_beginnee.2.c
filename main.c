#include <stdio.h>
#include <stdlib.h>

int main()
{  int x,y,z;
int sum,multi;
   printf("Enter x?:");
   scanf("%d",&x);
   printf("Enter y?:");
   scanf("%d",&y);
   if (x*y>=0){
    z=x;
    x=y;
    y=z;
    printf("x:%d\n",x);
    printf("y:%d\n",y);
   }else {
       multi=x*y;
       sum=x+y;
   printf("a*b=%d\n",multi);
   printf("a+b=%d\n",sum);
   }

    return 0;
}
