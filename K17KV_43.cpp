#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int i,j,n;
int array[n],head,mx,dif,point=0;
float avg; 
printf("Enter the maximum range of disk:-\t\t");
scanf("%d",&mx);
printf("\nEnter the size of the Array:-\t\t");
scanf("%d",&n);
printf("\nEnter the array elements:-\n");
for(i=1;i<n;i++)
{
a:
printf("\nEnter the %d element:-\t\t",i); 
scanf("%d",&array[i]);
if(array[i]>mx||array[i]<0)
{printf("!!!!error 606!!!\n");
 printf("Number should not be greater than %d and less than zero\n",mx);
 printf("!!!!enter again!!!!");
 goto a;	
}
}
b:
printf("\nEnter the initial head position:-\t\t");
scanf("%d",&head);
if(head>mx||head<0)
{
 printf("!!Error 505!!\n");
 printf("Head cannot be greater than %d and less than zero\n");
 printf("!!!!Enter again!!!!");
 goto b;
}
array[0]=head;
for(j=0;j<n;j++)
{
dif=abs(array[j+1]-array[j]);
point+=dif;
printf("Steps covered from %d  to %d are %d \n",array[j],array[j+1],dif);
}
printf("\nTotal time taken to run the program is %d\t\t",point);
avg=point/(float)n;
printf("\nAverage time taken is %f\t\t",avg);
getch();
}
