#include<stdio.h>
int main()
{
int arr[100],position,n,c;
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter %d elements",n);
for(c=0;c<n;c++)
{
scanf("%d",&arr[c]);
}
printf("Enter the location where you wish to delete elements\n");
scanf("%d",&position);
if(position>=n+1||position<1)
{
 printf("deletion is not possible\n");

}
else
{
for(c=position-1;c<n-1;c++)
 {
  arr[c]=arr[c+1];
 }
}

printf("resultant arrary is \n");

for(c=0;c<n-1;c++)
printf("%d\n",arr[c]);
return 0;
}

