#include<stdio.h>
void display_array(int arr1[],int n1)
{
	for(int i=0;i<n1;i++)
	{
	printf("%d",arr1[i]);
	}
}
void sort_array(int arr1[],int n1)
{
        int temp;
	for(int i=0;i<n1;i++)
	{
	  for(int j=i+1;j<n1;j++)
	   {
	      if(arr1[i]>arr1[j])
	       {
	         temp=arr1[i];
	         arr1[i]=arr1[j];
	         arr1[j]=temp;
	        }
	     }
	  }
}	        
void merge_array(int arr1[],int arr2[],int arr3[],int n1,int n2)
{       int i;
	for(i=0;i<n1;i++)
	{
	  arr3[i]=arr1[i];
        }
         for(int j=0;j<n2;j++)
         {
           arr3[i]=arr2[j];
           i=i+1;
         }
}
int main()
{
	int arr1[100],n1,arr2[100],n2,arr3[200],n3;
	printf("enter num of elements");
	scanf("%d",&n1);
	for(int i=0;i<n1;i++)
	{
	scanf("%d",&arr1[i]);
	}
	printf("enter num of  elements");
	scanf("%d",&n2);
	for(int i=0;i<n2;i++)
	{
	scanf("%d",&arr2[i]);
	}
	printf("\nBEFORE SORTING\n");
	display_array(arr1,n1);
	display_array(arr2,n2);
	sort_array(arr1,n1);
	sort_array(arr2,n2);
	printf("\nAFTER SORTING\n");
	display_array(arr1,n1);
	display_array(arr2,n2);
	merge_array(arr1,arr2,arr3,n1,n2);
	printf("\nAFTER MERGING\n");
	n3=n1+n2;
	sort_array(arr3,n3);
	display_array(arr3,n3);	
return 0;
}
	
