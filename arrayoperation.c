#include<stdio.h>
#include<stdlib.h>

int main()
{
int arr1[100],arr2[100],a1_size,a2_size,temp,total,size=0,i,j;

printf("enter how much element in the first array:");
scanf("%d",&a1_size);
printf("\nEnter %d elemenst\n",a1_size);
for(i=0;i<a1_size;i++)
{
 printf("\narray_1[%d]:",i+1);
 scanf("%d",&arr1[i]);
 }
 
printf("enter how much element in the second array:");
scanf("%d",&a2_size);
printf("\nEnter %d elemenst\n",a2_size);
for(i=0;i<a2_size;i++)
{
 printf("\narray_2[%d]:",i+1);
 scanf("%d",&arr2[i]);
 }
 
 total = a1_size+a2_size;
  for(i=a1_size;i<total;i++)
  {
  arr1[i]=arr2[size];
  size=size+1;
  }
  
for(i=total;i>0;i--)
{
 for(j=0;j<total-1;j++)
 {
  if(arr1[j]>arr1[j+1])
  {
  temp=arr1[j];
  arr1[j]=arr1[j+1];
  arr1[j+1]=temp;
  }
 }
}
printf("\n....................\n");
printf("array ellements are :\n");
for(i=0;i<total;i++)
printf("array_[%d]is:%d\n",i,arr1[i]);

} 
