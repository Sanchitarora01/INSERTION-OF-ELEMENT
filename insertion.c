//program to do insertion in array
#include<stdio.h>
void main()
{//variables that are going to be used in program
int i,j,k,pos,value,arr[100];
printf("Enter the no. of elements of array:");
scanf("%d",&k);
//taking values of array
for(i=0;i<k;i++)
{
printf("Enter the %d element:",i+1);
scanf("%d",&arr[i]);
}
//incrementing size of array
k++;
printf("Enter the position at which you want to insert the element:");
scanf("%d",&pos);
printf("Enter the value you want to insert:");
scanf("%d",&value);
//logic behind insertion of element in an array
for(i=k-1;i>=pos;i--)
arr[i]=arr[i-1];
arr[pos-1]=value;
//printing the final array
for(i=0;i<k;i++)
{
	printf("Value=%d",arr[i]);
	printf("\n");
}
}
