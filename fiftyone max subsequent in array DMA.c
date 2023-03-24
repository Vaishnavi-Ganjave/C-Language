/* Q51
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  int *p=NULL;
  int i,n;
  int sum=0,max;

  printf("Please enetr how many elements you want ");
  scanf("%d",&n);

  p=(int*)malloc(n*sizeof(int));

  for(i=0;i<n;i++)
  {
    scanf("%d",p+i);
  }
  max= *p+*(p+1);
  for(i=0;i<n-1;i++)
  {
    {    
      sum=*(p+i)+*(p+(i+1));
    }
      if(sum>max) 
    {
      max=sum;
    }

  }
  printf(" Maximun sum of a subsquent numbers is %d ",max);
  getch();
}









