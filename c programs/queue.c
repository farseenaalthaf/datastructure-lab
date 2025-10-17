#include<stdio.h>
#define maxsize 10
int q[maxsize],front=0,rear=0,item;
void enqueue(int item)
{
	if(rear>=maxsize)
	{
	printf("QUEUE IS FULL");
	}
	else
	{
	q[rear]=item;
	rear=rear+1;
	}
}
void dequeue()
{
	if(front>=rear)
	{
	  printf("QUEUE IS EMPTY");
	}
	else
	{
	  item=q[front];
	  printf("\ndeleted element is %d\n",item);
	  front+=1;
	}
}
void display()
{
	
	printf("queue items are\n");
	for(int i=front;i<rear;i++)
	{
	  printf("%d\n",q[i]);
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
	              printf("enter item to be inserted");
	  	      scanf("%d",&item);
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
	
		
