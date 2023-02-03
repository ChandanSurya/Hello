#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char buf[50];
	scanf("%s",buf);
	ssize_t r_w=0;
	r_w = write(1,buf,strlen(buf));
	if(r_w<0)
	{
		perror("Write Failed");
		printf("%ld\n",r_w);
		exit(0);
	}
	
	printf("\n%ld\n",r_w);
	exit(1);
}
