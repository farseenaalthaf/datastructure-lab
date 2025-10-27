#include<stdio.h>
#define maxsize 5
int q[maxsize],front=-1,rear=0,item;
void enqueue(int item)
{
	if(q[rear]!=0)
	{
	printf("QUEUE IS FULL");
	}
	else
	{
	printf("enter the item");
	scanf("%d",&item);
	q[rear]=item;
	rear=(rear+1) % maxsize;
	if(front==-1)
	{
	front=0;
	}
        }
}
void dequeue()
{
	if(q[front]==0 || front==-1)
	{
	  printf("QUEUE IS EMPTY");
	}
	else
	{  
	  printf("\nelement removed is%d\n",q[front]);
	  q[front]=0;
	  front+=1;
	  if(front==maxsize)
	  {
	     front=-1;
	     rear=0;
	  }
	}
}
void display()
{
        if (q[front]==0)
        {
           printf("queue is empty!nothing to display");
        }
        else
        {
            for(int i=front;i<maxsize;i++)
               {
                    if(q[i]!=0)
	              {
	                printf("%d\n",q[i]);
	              }
	       }
	       if(front>=rear)
                {
                for(int i=0;i<rear;i++)
                 {
	                printf("%d\n",q[i]);
	         }
	         }
	}
                   	
}
int main()
{
	int choice,item;
	do
	  {
	  	printf("\n----QUEUE-------\n");
	  	printf("1.ENQUEUE\n");
	  	printf("2.DEQUEUE\n");
	  	printf("3.DISPLAY\n");
	  	printf("4.EXIT\n");
	  	printf("enter your choice");
	  	scanf("%d",&choice);
	  	
	     switch(choice)
	     {  
	        case 1:
	  	      enqueue(item);
	  	      break;
	  	case 2:
	  	      dequeue();
	  	      break;      
	  	  
	  	case 3:
	  	        display();
	  	        break;
	  	case 4:
	  	         printf("------EXIT--------\n");  
	  	default:
	  	         printf("INVALID CHOICE\n");  
	      }
	  	         
	     }while(choice!=4);
return 0;	  	                 	
}
	
		
