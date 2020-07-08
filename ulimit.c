#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	pid_t pid=fork();//创建一个子进程
	if(pid==0)
	{
		printf("this is child:%d~\n",pid);
		sleep(5);
		exit(0);
		//让子进程先去退出
	}
	else if(pid>0)
	{
		printf("this is parent:%d~\n",pid);
		sleep(30);
	}
	return 0;
}
