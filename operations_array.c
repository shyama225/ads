#include<stdio.h>
#include<stdlib.h>

int arr[100],i,arr_count=0;

void create()
{
int i;
printf("\n\n...................................");
printf("\n Total number of elements in the array : ");
scanf("%d",&arr_count);
printf("\n enter the %d elements \n\n",arr_count);
for(i=0;i<arr_count;i++)
{
printf("Array[%d]:",i+1);
scanf("%d",&arr[i]);
printf("\n");
}
printf("\n.................................../n");
}

void insert()
{
 int ins_pos,i,value;
 printf("\n.................................../n");
 
 printf("\n position of insertion:");
 scanf("%d",&ins_pos);
  for(i=arr_count-1;i>=ins_pos-1;i--)
  {
   arr[i+1]=arr[i];
  }
printf("which value you want to add:");
scanf("%d",&value);
arr[ins_pos-1]=value;

printf("\n\n new array is:\n\n");
arr_count=arr_count+1;
for(i=0;i<arr_count;i++)
{
printf("%d\n",arr[i]);
}
printf("\n.................................../n");
}
void delete(){
	int del_pos,i;
	printf("\n\n...........................................");
	printf("\nEnter the position of array to delete an element : ");
	scanf("%d",&del_pos);
	for(i=del_pos-1;i< arr_count-1;i++){
		arr[i]=arr[i+1];
	}
		
	printf("\n\nNew array is : \n\n ");
	arr_count=arr_count-1;
	for(i=0;i < arr_count; i++){
	printf("%d\n",arr[i]);
	} 
	
	printf("\n\n...........................................");
}

void view(){
	int i;
	printf("\n\n...........................................");
	printf("Elements are : \n");
	for(i=0;i < arr_count; i++){
	printf("%d\n",arr[i]);
	} 
	printf("\n\n...........................................");
}

int main() {
	
	int opt=0;
	while (1){
		printf("\n\n...................");
		printf("1) CREATE\n");
		printf("2) INSERT\n");
		printf("3) DELETE\n");
		printf("4) VIEW\n");
		printf("0) QUIET\n\n");
		printf("choose your option : ");
		scanf("%d",&opt);
		printf("\n\n...................");
		
		if (opt==0)
			exit(0);
			
		switch(opt){
			case 1:
				create();
				break;
			case 2:
				insert();
				break;
			case 3:
				delete();
				break;
			case 4:
				view();
				break;
			default:
				printf("Invalid option! Try Again.");
		}
	}
	
	printf("ok");
	return 0;
}

















