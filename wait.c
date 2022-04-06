#include<unistd.h>
#include<stdio.h>
main()
{
   	int i=0,pid;
   	pid=fork();
   	if(pid==0)
   	 {
   		printf("child process started\n");
   		{
   		for(i=0;i<10;i++)
   		printf("\n%d",i);
   		}
   		printf("a child process ends");
   	 }
   	else
   	 {
   		printf("parent process starts\n");
   		wait(0);
   		printf("parent process end\n");
   	 }
   }
