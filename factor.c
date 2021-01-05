int main() {
  /*#include <math.h>*/
#include <stdlib.h>
#include <stdio.h>
float answ;
int fin, i, entry;
div_t test;
puts("Enter an integer to factor.");
scanf("%d",&entry);
answ=sqrt(entry);
fin=floor(answ);
for (i=1;i<=fin;i++)
{
test=div(entry,i);
if (test.rem==0)
printf("%d * %d\n",i,test.quot);
}
return 0;
}

