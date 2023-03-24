/* 3. Write a C program to search given element in 1-D array using binary search method (Use Dynamic Memory Allocation to represent an array)
owner name - Ganjave vaishnavi
Batch: PPA9
*/


//solution


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
    int i, n, search, last,mid, first=0,flag=0 ;
    int *p, temp, j;
    printf("enter the how many elements u want:");
    scanf("%d",&n);
    p=(int*)malloc(n * sizeof(int));
    printf("array elements are:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",p+i);
    }
    printf("array elements are\n");
    for(i=0; i<n; i++)
    {
        printf("%d\n",*(p+i));
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(*(p+i) > *(p+j) )
            {
                temp =*(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
	//sort array ascending
    printf("ascending order is \n" );
    for(i=0; i<n; i++)
    {
        printf("%d\n",*(p+i));
    }
    printf("enter the value to be search:");
    scanf("%d\n",&search);
    
    last=n-1;
    mid =(first+last) /2;
    while(first<=last)
    {
        if(search == *(p+mid))
        {
            flag=1;
            printf("element is found ");
            break;
        }
        else if(search > *(p+mid))
        {
            first=mid+1;
            mid=(first+last)/2;
        }
        else if(search < *(p+mid))
        {
            last=mid-1;
            mid=(first+last)/2;
        }
    }
    if(flag==0)
        printf("element is not Found ");

    getch();
}