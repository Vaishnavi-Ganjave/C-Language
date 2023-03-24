/* 
* Que.3 : Search element 1D array using binary search dynamically
* owner : Shreya Kailas Saskar
* batch : PPA9
*/
// solution :
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *p;
int n , i , j;
int temp;
int search;
int l , m ,f = 0;
int flag = 0;
printf("enter how many elements you want to insert : ");
scanf("%d",&n);
p = (int*)malloc(n*sizeof(int));
printf("enter array elements\n");
for(i = 0 ; i < n ; i++)
{
scanf("%d",p+i);
}
printf("array elements are\n");
for(i = 0 ; i < n ; i++)
{
printf("%d ",*(p+i));
}
//sort array ascending
for(i = 0 ; i < n ; i++)
{
for(j = i+1 ; j < n ; j++)
{
if(*(p+i) > *(p+j))
{
temp = *(p+i);
*(p+i) = *(p+j);
*(p+j) = temp;
}
}
}
printf("\nsorted array elements are\n");
for(i = 0 ; i < n ; i++)
{
printf("%d ",*(p+i));
}
printf("\nenter element you want to search : ");
scanf("%d",&search);
//binary search
l = n - 1;
m = (f + l)/2;
while(f <= l)
{
if(search == *(p+m))
{
flag = 1;
printf("number is found");
break;
}
else if(search > *(p+m))
{
f = m + 1;
m = (f + l)/2;
}
else if(search < *(p+m))
{
l = m - 1;
m = (f + l)/2;
}
}
if(flag == 0)
printf("number is not found");
getch();
}