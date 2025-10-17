#include<stdio.h>
int main()
{
	int a[50],n,sum=0;
	printf("enter size of array");
	scanf("%d",&n);
	if(n<50)
         {
	      for(int i=0;i<n;i++)
	       {
	      scanf("%d",&a[i]);
	       }
	      for(int i=0;i<n;i++)
               {   
	           sum=sum+a[i];
	       }
	        printf("sum is %d",sum);
	  }
	 else
	   {
	     printf("ERROR"); 
	   }
 return 0;
}
