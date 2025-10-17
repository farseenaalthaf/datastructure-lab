#include<stdio.h>
#define maxsize 10
int s[maxsize],top=-1;
void push(int item)
{
	if(top>=maxsize)
	{
	printf("STACK IS FULL");
	}
	else
	{
	top=top+1;
	s[top]=item;
	}
}
void pop()
{
	if(top<0)
	 printf("STACK IS EMPTY");
	else
	{
	  printf("\nthe element poped is %d\n",s[top]);
	  top=top-1;
	}
}
void display()
{
	
	printf("stack items from top to bottom \n");
	for(int i=top;i>-1;i--)
	{
	  printf("%d\n",s[i]);
	}
	
}	
	
int main()
{
	int choice,item;
	do
	  {
	  	printf("\n----STACK-------\n");
	  	printf("1.PUSH\n");
	  	printf("2.POP\n");
	  	printf("3.DISPLAY\n");
	  	printf("4.EXIT\n");
	  	printf("enter your choice");
	  	scanf("%d",&choice);
	  	
	     switch(choice)
	     {  
	       case 1:
	              printf("enter item to push to stack");
	  	      scanf("%d",&item);
	  	      push(item);
	  	      break;
	  	case 2:
	  	       pop();
	               break;    
	  	case 3:
	  	        display();
	  	        break;
	  	 case 4:
	  	         printf("------EXIT--------");  
	  	 default:
	  	         printf("INVALID CHOICE");  
	      }
	  	         
	     }while(choice!=4);
return 0;	  	                 	
}
	
	
