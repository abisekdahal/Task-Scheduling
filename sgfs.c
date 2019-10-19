#include "head.h"
sgfs()
{
double sorted[task][2],temp;
//i have exctime and taskno now accordingly i need to shedule sgfs
printf("\n usinf sgfs sheduling\n");
int i,j;
for(i=0;i<task;i++)
{
sorted[i][1]=exctime[i];
sorted[i][0]=taskno[i];
}
for(i=0;i<task;i++)
   {
    for(j=0;j<task;j++)
    {
    if(sorted[i][1]<sorted[j][1])
        {
          temp=sorted[i][1];
          sorted[i][1]=sorted[j][1];
          sorted[j][1]=temp;
          temp=sorted[i][0];
          sorted[i][0]=sorted[j][0];
          sorted[j][0]=temp;
        }
}
}
for(i=0;i<task;i++){
printf("\n sorted order of task no.:%.f exctime: %f",sorted[i][0],sorted[i][1]);
} 
printf("\n");
double ctime=0.0;
for(i=0;i<task;i++)
{
ctime=ctime+sorted[i][1];
printf("\n exection time after task no: %.f is %f",sorted [i][0],ctime);
}
printf("\n*********************************************************\n");
}
