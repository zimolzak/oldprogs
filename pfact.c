#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
long i,entry,p,r,found,prime,expo,temp,total;
ldiv_t test,x,answ;
puts("Enter an integer to prime-factorize.");
scanf("%d",&entry);
total=1;
for (i=2;i<=entry;i++)
{
if (total>(entry/2))
break;
test=ldiv(entry,i);
if (test.rem==0)
   {
   p=sqrt(i);
   r=1;
   found=0;
   prime=0;
   do
      {
      r=r+1;
      x=ldiv(i,r);
      if(x.rem==0)
      found=1;
      if(r>p)
             {
             found=1;
             prime=1;
             }
      }
    while (found==0);
    if (prime==1)
       {
       expo=0;
       temp=entry;
       printf("%d",i);
       do
         {
         answ=ldiv(temp,i);
         expo=expo+1;
         temp=answ.quot;
         }
       while (answ.rem==0);
       expo=expo-1;
       printf("^%d ",expo);
       total=total*pow(i,expo);
       }
   }
}
return 0;
}

