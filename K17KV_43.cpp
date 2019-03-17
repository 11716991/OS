#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int queue[20],n,head,i,j,k,seek=0,max,diff;
float aver;
printf("enter the max range of disk\t");
scanf("%d",&max);
printf("\nenter the size of queue request\t");
scanf("%d",&n);
printf("enter the queue\t");
for(i=1;i<=n;i++)
{
a:
scanf("%d",&queue[i]);
if(queue[i]>=max)
{printf("!!!!error 606!!!\n");
 printf("Number should not be greater than    %d\n",max);
 goto a;	
}
}
printf("\nenter the initial head position\t");
scanf("%d",&head);
queue[0]=head;
for(j=0;j<=n-1;j++)
{
diff=abs(queue[j+1]-queue[j]);
seek+=diff;
printf("move is from %d to %d with seek %d\n",queue[j],queue[j+1],diff);
}
printf("total seek time is%d\n",seek);
aver=seek/(float)n;
printf("avrage seek time is %f\n",aver);
getch();
}
