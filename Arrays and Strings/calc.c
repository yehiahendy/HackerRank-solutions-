#include<stdio.h>
#include "sum.h"
#include "sub.h"
int main (void)
{
	int x,y,s;
	scanf("%d%d",&x,&y);
	s = sum(x,y);
	printf("%d\n",s);
	s = sub(x,y);
	printf("%d",s);
}
