#include "sgfs.c"
#include "fcfs.c"
#include "priority.c"
#include "head.h"
int main()
{
srand(time(0));
int i;
for(i=0;i<task;i++)
{
taskno[i]=rand()%100;
exctime[i]=(rand()%1000)*0.01;
printf("task no:%d  execution time:%f\n",taskno[i],exctime[i]);
}
fcfs();
sgfs();
priority();
return 0;
}
