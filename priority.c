#include "head.h"
priority()
{
srand(time(0));
int i,p[task],index,j,small;
printf("\n the generated prioties are\n");
for(i=0;i<task;i++)
{
p[i]=rand()%100;
printf("\n%d ",p[i]);
}
printf("\n");
double ctime=0;
for(i=0;i<task;i++)
{
small=101;
for(j=0;j<task;j++)
{
if(p[j]<small)
{
small=p[j];
index=j;
}
}
p[index]=200;
ctime+=exctime[index];
printf("\n Execution time after task no: %d :  %f",taskno[index],ctime);
}
printf("\n****************************************************\n");
}
