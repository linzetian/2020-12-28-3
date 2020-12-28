//make use of the function about fputs
#include<stdio.h>
#include<errno.h>
#include<string.h>
int main()
{
	FILE* spwrite = fopen("F:\\c语言基础\\test1.txt","w");//w is mean of write(input)
	if (spwrite == NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	}
	//write the file
	fputs("hello world",spwrite);
	fputs("keep the fit", spwrite);
	fclose(spwrite);
	spwrite = NULL;
	return 0;
}