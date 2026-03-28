#include<stdio.h>
void main()
{
	char str[] = "hello world";
	int i,count=0;
	for(i=0;str[i] !=0; i++ )
	{
		if((i==0 && str[i] !=' ')||(str[i]!=0 && str[i-1] ==' ')){
			count++;
		}
	}
	printf("strings:%s",str);
	printf("\nthe number of words=%d",count);
	
}
