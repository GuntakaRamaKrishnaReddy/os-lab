#include<stdio.h>
void main()
   {
   	int ms,i,ps[20],n,size,p[20],s,intr=0;
   	printf("enter size of memory:");
   	scanf("%d",&ms);
   	printf("enter memory for os:");
   	scanf("%d",&s);
   	ms-=s;
   	printf("enter no of partitions to be divided:");
   	scanf("%d",&n);
   	size=ms/n;
   	for(i=0;i<n;i++)
   	{
   		printf("\n enter process and process size:");
   		scanf("%d%d",&p[i],&ps[i]);
   		if(ps[i]<=size)
   		{
   			intr=intr+size-ps[i];
   			printf("process %d is allocated\n",p[i]);
   		}
   		else
   			printf("\n process %d is blocked",p[i]);
   	}
   	printf("\n internal fragmentation is %d",intr);
   } 
   			
   			
   			
   			
   			
   			
   			
