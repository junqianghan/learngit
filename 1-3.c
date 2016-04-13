/*************************************************************************
	> File Name: 1-3.c
	> Author: junqianghan
	> Created Time: Thu 07 Apr 2016 11:19:19 PM CST
 ************************************************************************/

#include "apue.h"
int main(void)
{
	int c;
	while((c = getc(stdin)) != EOF)
	{
		if(putc(c,stdout) == EOF)
			err_sys("output error");
	}
	if(ferror(stdin))
	{
		err_sys("input error");
	}
	exit(0);
}
