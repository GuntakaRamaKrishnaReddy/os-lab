#include<stdio.h>
void main()
	{
		int arrival[10],brust[10],start[10],finish[10],wait[10],turn[10];
		int i,j,n,sum=0;
		float totalwait=0.0,totalturn=0.0;
		float avgwait=0.0,avgturn=0.0;
		start[0]=0;
		printf("Enter number of process");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  {
		  	printf("\n Enter process %d arrival and brust time\n",(i+1));
		  	scanf("%d%d",&arrival[i],&brust[i]);
		  }
		for(i=0;i<n;i++)
		  {
		  	sum=0;
		  	for(i=0;j<i;j++)
		  	  {
		  	  	sum=sum+brust[j];
		  	  }
			start[i]=sum;
		  }
		for(i=0;i<n;i++)
		  {
		  	finish[i]=brust[i]+start[i];
		  	wait[i]=start[i]-arrival[i];
		  	turn[i]=brust[i]+wait[i];
		  }
		for(i=0;i<n;i++)
		  {
		  	totalwait=totalwait+wait[i];
		  	totalturn=totalturn+turn[i];
		  }
		avgwait=totalwait/n;
		avgturn=totalturn/n;
		printf("\n arrival burst start finish wait turn\n");
		for(i=0;i<n;i++)
		  {
		  	printf("%7d %5d %5d %6d %4d %4d/n",arrival[i],brust[i],start[i],finish[i],wait[i],turn[i]);
		  }
		printf("average waiting time %f\n", avgwait);
		printf("average turnaround time %f\n", avgturn);
		//getch();
	}
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
		  	  
