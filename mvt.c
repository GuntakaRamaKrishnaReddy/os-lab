#include<stdio.h>
void main()
   {
   	int i,m,n,tot,s[20];
   	printf("enter totalmemory size:");
   	scanf("%d",&tot);
   	printf("enter no of pages:");
   	scanf("%d",&n);
   	printf("enter memory for os:");
   	scanf("%d",&m);
   	for(i=0;i<n;i++)
   	{
   		printf("enter size of page%d:",i+1);
   		scanf("%d",&s[i]);
   	}
   	tot=tot-m;
   	for(i=0;i<n;i++)
   	{
   		if(tot>=s[i])
   		{
   			printf("Allocate page%d\n",i+1);
   			tot=tot-s[i];
   		}
   		else
   			printf("process p%d is blocked\n",i+1);
   	}
   	printf("External Fragmentation is= %d",tot);
   
   }
   			
   			
   			
   			
   			
   			
   			
   	
