#include<stdio.h>
#define MAX 10
void enqueue();
void dequeue();
void search();
void display();
int c,queue[MAX],item,front=-1,rear=-1,i,n,flag=0;
void main()
{
 do
 {
  printf("\n 1)insertion\n 2)deletion\n 3)search\n 4)display\n 5)exit\n");
  scanf("%d",&c);
  switch(c)
  {
   case 1:enqueue();
          break;
   case 2:dequeue();
          break;
   case 3:search();
          break;
   case 4:display();
          break;
   case 5:printf("\n *********** exit point **********\n");
          break;
   default:printf("\n enter a valid choice 1 or 2 or 3 or 4 or 5");
   }
  }
  while(c!=5);
 }
 void enqueue()
 {
  if((rear+1)%MAX==front)
  {
   printf("\n ********* Queue overflow ********");
  }
  else
  {
   if(rear==-1)
   front=0;
   printf("\n enter the element to insert:");
   scanf("%d",&item);
   rear=(rear+1)%MAX;
   queue[rear]=item;
   }
  }
  void dequeue()
  {
   if(front==-1)
   {
    printf("\n*********Queue underflow*******");
    }
    else if(front==rear)
    {
     printf("\n The deleted element is:%d\n",queue[front]);
     front=rear=-1;
    }
    else
    {
     printf("\n The deleted element is :%d\n",queue[front]);
     front=(front+1)%MAX;
     }
    }
    void search()
    {
     printf("\n enter the value to search\n");
     scanf("%d",&n);
     if(front==-1)
     {
      printf("\n ********Queue underflow*******");
      }
      else
      {
       int front_pos=front,rear_pos=rear;
       if(front_pos>rear_pos)
       {
        while(front_pos>rear_pos)
        {
         if(queue[front_pos]==n)
         {
          flag=1;
          break;
          }
          front_pos=((front_pos+1))%MAX;
          }
         }
         if(front_pos<=rear_pos)
         {
          for(i=front_pos;i<=rear_pos;i++)
          {
           if(queue[i]==n)
           {
            flag=1;
            break;
           }
          }
         }
        }
        if(flag==1)
             printf("\n element is found");
        else
             printf("\n element is not found");
       }
       void display()
       {
        if(front==-1)
        {
         printf("\n *********Queue underflow******");
        }
        else
        {
         printf("\n................\n");
         int front_pos=front,rear_pos=rear;
         if(front_pos>rear_pos)
         {
          while(front_pos>rear_pos)
          {
           printf("%d",queue[front_pos]);
           front_pos=((front_pos+1))%MAX;
           }
          }
          if(front_pos<=rear_pos)
          {
           for(i=front_pos;i<=rear_pos;i++)
               printf("%d",queue[i]);
          }
          printf("\n...............\n");
         }
        }                                                         
