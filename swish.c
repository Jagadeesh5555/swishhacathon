#include <stdio.h>
int main()
{
    int i,cost,disc,tcost=0,tempcost;
    float temp;
   scanf("%d%d",&cost,&disc);
   while(cost!=0)
   {
       tcost=tcost+cost;
       temp=((cost*disc)/100);
       printf("%f",temp);
       tempcost=(int)temp;
       cost=tempcost;
       if(cost==1)
       {
           tcost=tcost+1;
           break;
       }
   }
   printf("%d",tcost);
}

