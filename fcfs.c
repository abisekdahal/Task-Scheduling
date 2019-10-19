#include "head.h"
fcfs()
{
int i;
double ctime=0;
printf("\n First Come First Server\n");
for(i=0;i<task;i++)
{
ctime=ctime+exctime[i];
printf("\n Exectution time after task no. %d  :      %f ",taskno[i],ctime);
}
printf("\n");
}
